#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int ,double> m;
    m.insert({10,14.5});
    m.insert({10,18.5});
    cout<<"Count of 15 is "<<m.count(15)<<endl;
    multimap<int ,double>::iterator it;
    for ( it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}