#include<iostream>
using namespace std;
class second;
class first
{private:
int a;

public:
void input()
{
cout<<"\n Enter the value for a :";
cin>>a;
}
friend void add(first, second );
};
class second
{
private:
int b;
public:
void inputb()
{cout<<"\n Enter the value for b :";
cin>>b;
}
friend void add(first, second );
};
void add(first f, second s)
{
int r;
r= f.a+s.b;
cout<<"\n The sum is :"<<r;
}
int main()
{
first f;
f.input();
second s;
s.inputb();
add(f,s);
}