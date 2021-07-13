#include<iostream>
using namespace std;
void fibo(int pos,int n1,int n2,int count)  // Function definition
{
    int n3;
    if(count<pos)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        count++;
        cout<<n3<<" ";
        fibo(pos,n1,n2,count);   //Recursion or calling function again
    }
}
int main()
{
    int pos,n1=0,n2=1,count=2;
    cout<<"Enter the position for fibbonacci series you want to print ";
    cin>>pos;
    cout<<n1<<" "<<n2<<" ";
    fibo(pos,n1,n2,count);
}