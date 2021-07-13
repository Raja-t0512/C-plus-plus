#include<iostream>
#include<vector>
using namespace std;
void Display_Vec(vector<int> v)
{
    cout<<"Your vector is ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;      //Declaring a vector of 0 size
    Display_Vec(v);
    vector<int> v1(5);   //Declaring a vector of 5 size with all elements 0
    Display_Vec(v1);
    vector<int> v2(5,3); //Declaring a vector of 5 size with all elements 3
    Display_Vec(v2);
// Taking input from user
    vector<int> v4;
    int n;
    cout<<"Enter number of elements you want to add to your vector: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v4.push_back(x);
    }
    Display_Vec(v4);
    return 0;
}