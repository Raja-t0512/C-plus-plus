#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next; 
};
struct node *rear=0,*front=0;
int main()
{
    int choice=1,op;
    void enqueue();
    void dequeue();
    void peek();
    void display();
    while(choice)
    {
        cout<<"Press 1 to add data\nPress 2 to delete front\nPress 3 to peek the front element\nPress 4 to display the Queue\n";
        cin>>op;
        switch(op)
        {
            case 1: enqueue();break;
            case 2: dequeue();break;
            case 3: peek();break;
            case 4: display();break;
            default: cout<<"*Enter correct choice(1-4) ";break;
        }
        cout<<"\nPress 1 to perform more operation or Press 0 to exit: ";
        cin>>choice;
    }
}
void enqueue()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data: ";
    cin>>newnode->data;
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    cout<<newnode->data<<" was added";
}
void dequeue()
{
    if(front==0)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else if(front==rear)
    {
        cout<<"Deleted element is "<<front->data;
        free(front);
        front=rear=0;
    }
    else
    {
        cout<<"Deleted element is "<<front->data;
        struct node *temp;
        temp=front;
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==0)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else
    {
        cout<<"Element at front is "<<front->data;
    }
}
void display()
{
    if(front==0)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else
    {
        struct node *temp;
        temp=front;
        cout<<"Your list is ";
        while(temp!=rear)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}