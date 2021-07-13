#include<iostream>
using namespace std;
#define N 5
int deque[N];
int front=-1,rear=-1;
void add_front(int x)
{
    if((front==0&&rear==N-1)||front==rear+1)
    {
        cout<<"\t\t\t*****Queue Overflow*****";
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        deque[front]=x;
        cout<<deque[front]<<" was added";
    }
    else
    {
        front--;
        deque[front]=x;
        cout<<deque[front]<<" was added";
    }
}
void delete_front()
{
    if(front==-1&&rear==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else if(front==rear)
    {
        cout<<deque[front]<<" was deleted";
        front=rear=-1;
    }
    else if(front==N-1)
    {
        cout<<deque[front]<<" was deleted";
        front=0;
    }
    else
    {
        cout<<deque[front]<<" was deleted";
        front++;
    }
}
void add_rear(int x)
{
    if((front==0&&rear==N-1)||front==rear+1)
    {
        cout<<"\t\t\t*****Queue Overflow*****";
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        deque[rear]=x;
        cout<<deque[rear]<<" was added";
    }
    else
    {
        rear++;
        deque[rear]=x;
        cout<<deque[rear]<<" was added";
    }
}
void delete_rear()
{
    if(front==-1&&rear==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else if(rear==0)
    {
        cout<<deque[rear]<<" was deleted";
        rear=N-1;
    }
    else if(rear==front)
    {
        cout<<deque[rear]<<" was deleted";
        rear=front=-1;
    }
    else
    {
        cout<<deque[rear]<<" was deleted";
        rear--;
    }
}
int main()
{
    int choice=1,op,a;
    void add_front(int x);    
    void delete_front();
    void add_rear(int x);
    void delete_rear(); 
    void display();
    while(choice)
    {
        cout<<"\nPress 1 to add data from front end\nPress 2 to add data from rear end\nPress 3 to delete data from front end\nPress 4 to delete data from rear end\nPress 5 to display the queue";
        cin>>op;
        switch(op)
        {
            case 1: cout<<"\nEnter data:";cin>>a;add_front(a);break;
            case 2: cout<<"\nEnter data:";cin>>a;add_rear(a);break;
            case 3: delete_front();break;
            case 4: delete_front();break;
            case 5: display();break;
        }
         cout<<"\nPress 1 to perform more operations or press 0 to exit: ";
         cin>>choice;
    }
}
void display()
{
    int i=front;
    while(i!=rear)
    {
        cout<<" "<<deque[i];
        i=(i+1)%N;
    }
    cout<<" "<<deque[i];
}