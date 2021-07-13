#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int prev=arr[0];
        for (int i = 0; i < N; i++)
        {
            if(prev>=arr[i])
            {
                count++;
                prev=arr[i];
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}