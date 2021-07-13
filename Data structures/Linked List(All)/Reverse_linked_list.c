#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *temp, *head;
int count=0, choice = 1, operation;
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
    head=0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Press 1 to enter more data or press 0 to exit");
        scanf("%d",&choice);
    }
}
void display()
{
    temp = head;
    while(temp!=0)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
}
void reverse()
{
    struct node *p,*c,*n;
    p=0;
    c=head;
    n=head;
    while (n!=0)
    {
        n=n->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}