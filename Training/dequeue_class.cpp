#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> d;
    d.push_back(3);
    d.push_front(1);
    d.insert(d.begin()+1,2);
    d[2]=0;

    deque<int>::iterator it;
    
    for ( it = d.begin(); it != d.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}