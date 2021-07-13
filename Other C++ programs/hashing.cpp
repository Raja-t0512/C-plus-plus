#include<iostream>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main()
{
    int n;
    cout<<"\t\t\t*****PROGRAM TO CHECK OCCURENCE OF A NUMBER IN AN ARRAY*****"<<endl;
    cout<<"Enter size of your array: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter elements of your array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int t;
    cout<<endl<<"Check count of how many numbers in your array: ";
    cin>>t;
    while (t--)
    {
        int x;
        cout<<endl<<"Enter number: ";
        cin>>x;
        cout<<endl<<"Count: ";
        cout<<hsh[x]<<endl;
    }
    
    return 0;
}