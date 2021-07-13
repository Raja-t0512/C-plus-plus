#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int sum=0;
        while(N!=0)
        {
            int last_digit=N%10;
            sum+=last_digit;
            N=N/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}