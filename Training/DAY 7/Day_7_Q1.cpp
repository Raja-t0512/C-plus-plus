#include<iostream>
using namespace std;
void rotate(int array[],int size) //Function to rotate the array once
{
    int temp=array[0];
    for (int i = 0; i < size-1; i++)
    {
        array[i]=array[i+1];
    }
    array[size-1]=temp;
}
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter "<<n<<" elements: ";

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int x;
    cout<<endl<<"How many times you want to rotate the array?: ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        rotate(a,n);
    }

    cout<<endl<<"After "<<x<<" rotations, Your array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}