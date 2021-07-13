#include<iostream>
using namespace std;
class Student
{
    string name;
    int Roll_number;
    public:
    Student()
    {
        name= "John";
        Roll_number = 2;
    }
    void Display();
};
void Student :: Display()
{
    cout<<"Your name is "<<name<<endl;
    cout<<"Your Roll number is "<<Roll_number<<endl;
}
int main()
{
    Student S;
    S.Display();
    return 0;
}