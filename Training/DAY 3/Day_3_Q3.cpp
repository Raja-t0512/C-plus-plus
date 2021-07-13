#include<iostream>
using namespace std;
int main()
{
    int x=1,p[20],n=0;
    int i=0;
    while(x!=-1){
    cout<<"Enter points: ";
    cin>>p[i];
    i++;
    n++;
    cout<<"Want to add more data?\nPress 1 to add more data or press -1 to exit.";
    cin>>x;
    }
    float avg;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+p[i];
    }
    avg=sum/n;
    cout<<"Average points scored is "<<avg;
    return 0;
}