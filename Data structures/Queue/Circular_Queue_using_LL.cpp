#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*front=0,*rear=0;
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
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter data: ";
    cin>>newnode->data;
    newnode->next=0;
    if(front==0)
    {
        front=rear=newnode;
        newnode->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void dequeue()
{
    if(front==0)
    {
        cout<<"\t\t\t*****Queue Underflow!*****";
    }
    else
    { 
        struct node *temp;
        cout<<"Deleted "<<front->data;
        temp=front;
        front=front->next;
        rear->next=front;
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
        cout<<"\t\t\t*****Queue is empty!*****";
    }
    else
    { 
        struct node *temp;
        temp=front;
        while(temp!=rear)
        {
            cout<<"->"<<temp->data;
            temp=temp->next;
        }
        cout<<"->"<<temp->data;
    }
}