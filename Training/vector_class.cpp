#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"The size is "<<v.size()<<endl;
    cout<<"The capacity of v is "<<v.capacity()<<endl;
    vector <int>::iterator it;
    cout<<"Elements of our vector are ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}