#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
int main()
{
    int choice=1;
    struct node *newnode,*head,*tail,*temp;
    head=0,tail=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
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
        tail->next=head;
        head->prev=tail;
        printf("Press 1 to enter more data or Press 0 to exit: ");
        scanf("%d",&choice);
    }
    temp=head;
    while (temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}