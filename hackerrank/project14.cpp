#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int> s;
    int Q;
    cin>>Q;
    for (int i=0; i<Q; i++) {
        int x,y;
        cin>>x;
        cin>>y;
        if(x==1)
        {
            s.insert(y);
        }
        else if (x==2) {
            s.erase(y);
        }
        else if(x==3)
        {
            set <int>::iterator iter;
            iter=s.find(y);
            if(iter==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }    
        }
    }
    return 0;
}