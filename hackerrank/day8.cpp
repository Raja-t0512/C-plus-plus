#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map <string,long> m;
    for (int i=0;i<n;i++)
    {
        cin >> name;
        cin >> num;
        m[name] = num;
    }
    while(cin>>name) 
    {
        if (m.find(name)!=m.end())
            cout<<name<<"="<<m.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
