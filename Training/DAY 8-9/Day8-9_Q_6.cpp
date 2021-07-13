// Implement a stack using single queue
#include<iostream>
using namespace std;
#define N 5
int Queue[N];
int front=-1,rear=-1;
void Push()
{
    int x;
    if(rear==N-1)
    {
        cout<<"Stack Overflow";
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        cout<<"Enter data: ";
        cin>>x;
        Queue[rear]=x;
    }
    else
    {
        rear++;
        cout<<"Enter data: ";
        cin>>x;
        Queue[rear]=x;
    }
}
void Pop()
{
    if(rear==-1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        int x=Queue[rear];
        rear--;
        cout<<Queue[rear]<<" was deleted";
    }
}
void display()
{
    if(rear==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<"Your stack is";
        for (int i = rear; i >= 0; i--)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int choice,op=1;
    while(op)
    {
        cout<<"Press 1 to add data\nPress 2 to delete front\nPress 3 to display\n";
        cin>>choice;
        switch(choice)
        {
        case 1: Push();break;
        case 2: Pop();break;
        case 3: display();break;
        default: cout<<"\nPress 1-3 only!\n";break;
        }
        cout<<"\nPress 1 to perform another operation or press 0 to exit: ";
        cin>>op;
    }
    return 0;
}