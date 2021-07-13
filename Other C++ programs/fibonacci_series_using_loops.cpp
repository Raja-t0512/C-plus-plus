#include<iostream>
using namespace std;
int main()
{
    int a,i,f=0,s=1,series;
    cout<<"Enter the position for fibbonacci series: ";
    cin>>a;
    cout<<f<<" "<<s<<" ";
    for(i=0;i<a;i++)
    {
        if(a<=1)
        {
            series=a;
        }
        else
        {
            series=f+s;
            f=s;
            s=series;
        }
        cout<<series<<" ";
    }
    return 0;
}