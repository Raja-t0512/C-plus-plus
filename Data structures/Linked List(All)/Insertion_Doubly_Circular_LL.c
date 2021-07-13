#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head,*tail,*newnode,*temp;
int count=0;
int main()
{
    void create();
    void insert_at_beg();
    void insert_at_end();
    void insert_at_pos();
    void display();
    create();
    int op,x;
    while (x)
    {
        printf("Press 1 to insert at the beginning\nPress 2 to insert to the end\nPress 3 to insert at any specified position ");
        scanf("%d",&op);
        switch(op)
        {
            case 1: insert_at_beg();break;
            case 2: insert_at_end();break;
            case 3: insert_at_pos();break;
        }
        printf("Press 1 to perform more operations or Perss 0 to exit");
        scanf("%d",&x);
    }
    display();
}
void create()
{
    int choice=1;
    head=0,tail=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if (head==0)
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
        printf("Press 1 to enter more data or Press 0 to exit: ");
        scanf("%d",&choice);
        count++;
    }
}
void insert_at_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    newnode->prev=head->prev;
    head->prev=newnode;
    tail->next=newnode;
    head=newnode;
    count++;
}
void insert_at_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev=tail;
    newnode->next=head;
    head->prev=newnode;
    tail->next=newnode;
    tail=newnode;
    count++;   
}
void insert_at_pos()
{
    int i=1,pos;
    printf("Enter the position where you want to insert data: ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
    }
    else if(pos==1)
    {
        insert_at_beg();
    }
    else if(pos==count)
    {
        insert_at_end();
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        count++;
    }
}
void display()
{
    temp=head;
    while(temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}