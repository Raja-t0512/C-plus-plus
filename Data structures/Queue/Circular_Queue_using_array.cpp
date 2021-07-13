#include<iostream>
using namespace std;
#define N 5
int Queue[N];
int front=-1;
int rear=-1;
int main()
{
    void enqueue();
    void dequeue();
    void peek();
    void display();
    int op,choice=1;
    while(choice)
    {
        cout<<"Press 1 to insert data\nPress 2 to delete front\nPress 3 to peek the front element\nPress 4 to display the Queue\n";
        cin>>op;
        switch (op)
        {
        case 1:enqueue();break;
        case 2:dequeue();break;
        case 3:peek();break;
        case 4:display();break;
        default:cout<<"Enter valid choice(1-4)";break;
        }
        cout<<"\nPress 1 to perform more opertions or press 0 to exit: ";
        cin>>choice;
    }
}
void enqueue()
{
    int x;
    if((rear==N-1&&front==0)||front==rear+1)
    {
        cout<<"\t\t\t*****Queue Overflow!*****";
    }
    else if(front==-1&&rear==-1)
    {

        front=rear=0;
        cout<<"Enter data: ";
        cin>>x;
        Queue[rear]=x;
        cout<<Queue[rear]<<" was added";
    }
    else
    {
        rear=(rear+1)%N;
        cout<<"Enter data: ";
        cin>>x;
        Queue[rear]=x;
        cout<<Queue[rear]<<" was added";
    }
}
void dequeue()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else
    {
        cout<<Queue[front]<<" was deleted";
        front=(front+1)%N;
    }
}
void peek()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else
    {
        cout<<Queue[front]<<" is present at front.";
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else
    {
        int i=front;
        cout<<"Your list is ";
        while(i!=rear)
        {
            cout<<" "<<Queue[i];
            i=(i+1)%N;
        }
        cout<<" "<<Queue[i];
    }
}