#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *tail,*head, *newnode;
int count=0;
int main()
{
    int operation;
    void create();
    void insert_at_beg();
    void display();
    void insert_at_end();
    void insert_at_pos();
    create();
    printf("Press 1 for INSERTION AT THE BEGINNING\nPress 2 for INSERTION AT THE END\nPress 3 for INSERTION AT ANY POSITION");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1: insert_at_beg();break;
        case 2: insert_at_end();break;
        case 3: insert_at_pos();break;
    }
    display();
}
void create()
{
    int choice=1;
    head=0;
    while(choice)
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
            tail=tail->next;
        }
        count++;
        printf("Press 1 to add more data or Press 0 to exit: ");
        scanf("%d",&choice);
    }
}
void insert_at_beg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    count++;
}
void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=tail;
    tail->next=newnode;
    count++;
}
void insert_at_pos()
{
    struct node *temp;
    temp=head;
    int i=1,pos;
    printf("Enter the position where you want to add data:- ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next->prev=newnode;
    }
}    
void display()
{
    struct node *temp;
    temp=head;
    printf("Your list: \n");
    while(temp!=0)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
}