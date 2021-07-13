#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int ,double> m;
    m.insert({10,14.5});
    m.insert({10,18.5});//This will not be added because no data duplication is allowed in map keys
    cout<<"Count of 15 is "<<m.count(10)<<endl;
    map<int ,double>::iterator it;
    for ( it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}