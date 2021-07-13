#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> la,lb;
    la.push_back(0);
    la.push_back(1);
    la.push_back(3);
    lb.push_back(4);
    lb.push_front(2);
    la.sort();
    lb.sort();
    la.merge(lb);
    
    list<int>::iterator it;

    for ( it = la.begin(); it != la.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}