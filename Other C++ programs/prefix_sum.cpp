#include<iostream>
using namespace std;
const int N=1e7;
int pf[N];
int main()
{
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter your array elements: ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int t;
    cout<<"Enter number of times you want to do the execution: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter left and right index: ";
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1];
    }
    return 0;
}