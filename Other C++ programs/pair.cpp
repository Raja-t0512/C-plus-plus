#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int>> v;
    cout<<"Enter size of pair: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cout<<"Enter first part: ";
        cin>>x;
        cout<<"Enter second part: ";
        cin>>y;
        v.push_back({x,y});    // or   v.push_back(make_pair(x,y));
    }
    cout<<"Vector of pair: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
    return 0;
}
