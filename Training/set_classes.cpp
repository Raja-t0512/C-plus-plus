#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int, less<int>> m;
    m.insert(10);
    m.insert(35);
    m.insert(10); //This will not be added because no data duplication is allowed in set
    cout << "Count of 10 is " << m.count(10)<<endl;
    set<int, less<int>>::iterator it;
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