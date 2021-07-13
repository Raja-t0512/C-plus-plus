#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *temp,*head;
void create()
{
    struct node *newnode;
    int choice=1;
    head=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
        printf("Press 1 to enter more values or press 0 to exit: ");
        scanf("%d",&choice);
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
int main()
{
    void create();
    void display();
    create();
    display();
return 0;    
}