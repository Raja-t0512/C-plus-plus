#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int count=1;
struct node *tail,*temp,*newnode;
int main()
{
    int operation;
    void create();
    void insert_at_beg();
    void insert_at_end();
    void insert_at_pos();
    void display();
    create();
    printf("Press 1 to insert at the beginning\nPress 2 to insert at the end\nPress 3 to insert at any position\n");
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
    struct node *temp;
    while(choice)
    {    
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=temp=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;

        }
        count++;
        tail->next=temp;
        printf("Press 1 to enter more data or press 0 to exit:");
        scanf("%d",&choice);
    }
}
void insert_at_beg()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=tail->next;
    tail->next=newnode;
}
void insert_at_end()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=tail->next;
    printf("Tail points at %d\n",tail->data);
}
void insert_at_pos()
{
    int pos,i=1;
    printf("Enter the position where you want to insert: ");
    scanf("%d",&pos);
    if(pos>count)
    printf("Invalid position");
    else if(pos==1)
    insert_at_beg();
    else if(pos==count)
    insert_at_end();
    else
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=tail->next;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
void display()
{
    printf("Your list is: ");
    temp=tail->next;
    while(temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}