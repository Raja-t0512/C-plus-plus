// Iterator is similar to pointer it points to the objects in the containter(vector,pair,etc...)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout<<"Enter number of elements: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>::iterator it;   //Syntax of declaring an iterator
    cout<<"Your vector is ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
