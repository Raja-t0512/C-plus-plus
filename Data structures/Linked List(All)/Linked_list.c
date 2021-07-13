#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *newnode,*head=0,*temp;
    int choice=1;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp = newnode;
        }
        printf("Press 1 to enter more data or press 0 to exit");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    return 0;    
}