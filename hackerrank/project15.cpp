#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin>>Q;
    map <string,int > m;
    for(int i=0;i<Q;i++)
    {
        int type;
        cin>>type;
        string name;
        int marks;
        cin>>name;
        map <string,int> :: iterator iter;
        if(type==1)
        {       
            cin>>marks;
            iter=m.find(name);
            if(iter==m.end())
            m.insert({name,marks});
            else
            m[name]+=marks;
        }
        else if(type==2)
        {
            m.erase(name);
        }
        else if(type==3)
        {
            cout<<m[name]<<endl;
        }
    }
    return 0;
}

