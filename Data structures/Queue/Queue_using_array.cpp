#include<iostream>
using namespace std;
#define N 5
int Queue[N];
int front=-1,rear=-1;
int main()
{
    int op,choice=1,x;
    void enqueue(int a);
    void dequeue();
    void peek();
    void display();
    while(choice)
    {
        cout<<"Press 1 to add data\nPress 2 to delete front\nPress 3 to peek the front element\nPress 4 to display the Queue\n";
        cin>>op;
        switch(op)
        {
            case 1: cout<<"Enter the element you want to insert: ";
                    cin>>x;
                    enqueue(x);break;
            case 2: dequeue();break;
            case 3: peek();break;
            case 4: display();break;
            default: cout<<"*Enter correct choice(1-4) ";break;
        }
        cout<<"\nPress 1 to perform more operation or Press 0 to exit: ";
        cin>>choice;
    }
}
void enqueue(int a)
{
    if(rear==N-1)
    {
        cout<<"\t\t\t*****Queue Overflow!*****";
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        Queue[rear]=a;
        cout<<a<<" was added in the Queue";
    }
    else
    {

        rear++;
        Queue[rear]=a;
        cout<<a<<" was added in the Queue";
    }
}
void dequeue()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else if(front==rear)
    {
        cout<<"Deleted element is "<<Queue[front];
        front=-1;
        rear=-1;
    }
    else
    {
        cout<<"Deleted element is "<<Queue[front];
        front++;
    }
}
void peek()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else 
    {
        cout<<"Element at front is "<<Queue[front];
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue is Empty!*****";
    }
    else
    {
        cout<<"Your Queue is ";
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
    }
}