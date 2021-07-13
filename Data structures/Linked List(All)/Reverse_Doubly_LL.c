#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *temp,*head,*tail;
int main()
{
    void create();
    void reverse();
    void display();
    create();
    reverse();
    temp=tail;
    tail=head;
    head=temp;
    display();
    return 0;
}
void create()
{
    struct node *newnode;
    head=0;
    int choice=1,operation;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
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
        printf("Press 1 to enter more data or Press 0 to exit:");
        scanf("%d",&choice);
    }
}
void reverse()
{
    struct node *nextnode;
    temp=head;
    nextnode=head;
    while(temp!=0)
    {
        nextnode=temp->next;
        temp->next=temp->prev;
        temp->prev=nextnode;
        temp=nextnode;
    }
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
}