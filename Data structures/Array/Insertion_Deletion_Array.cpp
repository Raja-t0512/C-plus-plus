#include<iostream>
using namespace std;
int main()
{
    void ins_at_beg(int arr[],int n);
    void ins_at_end(int arr[],int n);
    void ins_at_pos(int arr[],int n);
    void del_from_beg(int arr[],int n);
    void del_from_end(int arr[],int n);
    void del_from_pos(int arr[],int n);
    void display1(int arr[],int n);
    void display2(int arr[],int n);
    int a[20],n,i,op,choice;
    cout<<"Enter size of the Array: ";
    cin>>n;
    cout<<"\nEnter elements of your Array: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\nYour Array: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\nPress 1 for Insertion or Press 2 for Deletion: ";
    cin>>op;
    if(op==1)
    {
        cout<<"\nPress 1 for Insertion at beginning\nPress 2 for Insertion at the end\nPress 3 for Insertion at any position: ";
        cin>>choice;
        switch(choice)
        {
        case 1: ins_at_beg(a,n);break;
        case 2: ins_at_end(a,n);break;
        case 3: ins_at_pos(a,n);break;
        default: cout<<"Invalid choice";break;
        }
        display1(a,n);
    }
    else if(op==2)
    {
        cout<<"\nPress 1 for Deletion at beginning\nPress 2 for Deletion at the end\nPress 3 for Deletion at any position: ";
        cin>>choice;
        switch(choice)
        {
        case 1: del_from_beg(a,n);break;
        case 2: del_from_end(a,n);break;
        case 3: del_from_pos(a,n);break;
        default: cout<<"Invalid choice";break;
        }
        display2(a,n);
    }
    else
    {
        cout<<"Invalid choice!";
    }
    
}
void ins_at_beg(int arr[],int n)
{
    int i,x;
    cout<<"Enter data you want to insert at beginning: ";
    cin>>x;
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    n = n+1;
}
void ins_at_end(int arr[],int n)
{
    int i,x;
    cout<<"Enter data you want to insert at the end: ";
    cin>>x;
    arr[n]=x;
    n = n+1;
}
void ins_at_pos(int arr[],int n)
{
    int i,x,pos;
    cout<<"Enter the position where you want to insert data: ";
    cin>>pos;
    if(pos>n||pos<0)
    cout<<"Invalid position";
    else if(pos==1)
    ins_at_beg(arr,n);
    else if(pos==n+1)
    ins_at_end(arr,n);
    else
    {
        cout<<"Enter data you want to insert: ";
        cin>>x;
        for(i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;
    }
    n=n+1;
}
void del_from_beg(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
}
void del_from_end(int arr[],int n)
{
    n=n-1;
}
void del_from_pos(int arr[],int n)
{
    int pos,i;
    cout<<"Enter the position from where you want to delete data: ";
    cin>>pos;
    if(pos>n||pos<0)
    cout<<"Invalid position";
    else if(pos==1)
    del_from_beg(arr,n);
    else if(pos==n)
    del_from_end(arr,n);
    else
    {
        for(i=pos-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
    }
}
void display1(int arr[],int n)
{
    int i;
    cout<<"\nYour Array: ";
    for(i=0;i<=n;i++)
    cout<<arr[i]<<" ";
}
void display2(int arr[],int n)
{
    int i;
    cout<<"\nYour Array: ";
    for(i=0;i<n-1;i++)
    cout<<arr[i]<<" ";
}