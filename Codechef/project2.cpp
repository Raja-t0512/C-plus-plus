#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
        long long int reverse=0;
        while(N!=0)
        {
            long long int last_digit=N%10;
            reverse =reverse*10 + last_digit; 
            N=N/10;
        }
        cout<<reverse<<endl;
    }
    return 0;
}