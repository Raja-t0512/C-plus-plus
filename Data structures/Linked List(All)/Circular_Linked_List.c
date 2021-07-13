#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int choice=1,count=0;
    struct node *temp,*tail,*newnode;
    tail=0;
    while(choice){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    if(tail==0)
    {
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
    tail->next=temp;
    count++;
    printf("Press 1 to enter more data or press 0 to exit: ");
    scanf("%d",&choice);
    }
    temp=tail->next;
    while(temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}