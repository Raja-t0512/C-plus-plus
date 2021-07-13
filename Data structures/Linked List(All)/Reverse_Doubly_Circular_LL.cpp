#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *head,*tail;
int main()
{
    void create();
    void reverse();
    void display();
    create();
    reverse();
    display();
}
void create()
{
    struct node *newnode;
    head=0,tail=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter data: ";
        cin>>newnode->data;
        if(head==0)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        head->prev=tail;
        tail->next=head;
        cout<<"Press 1 to enter more data or press 0 to exit";
        cin>>choice;
    }
}
void reverse()
{
    struct node *temp,*ntemp;
    temp=head;
    ntemp=head;
    while(temp!=tail)
    {
        ntemp=temp->next;
        temp->next=temp->prev;
        temp->prev=ntemp;
        temp=ntemp;
    }
    ntemp=temp->next;
    temp->next=temp->prev;
    temp->prev=ntemp;
    temp=tail;
    tail=head;
    head=temp;
}
void display()
{
    struct node *temp;
    temp=head;
    while (temp!=tail);
    {
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
    cout<<"->"<<temp->data;   
}
