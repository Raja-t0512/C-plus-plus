#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int, less<int>> m;
    m.insert(10);
    m.insert(35);
    m.insert(10);
    cout << "Count of 10 is " << m.count(10)<<endl;
    multiset<int, less<int>>::iterator it;
    for ( it = m.begin(); it != m.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    it = m.find(10);
    if (it != m.end())
    {
        cout << endl
             << "10 was found";
    }
    return 0;
}