#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
int count=0;
int main()
{
    void IAB();
    void IAE();
    void IAP();
    int choice=1,operation;
    head=0;
    while(choice)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    head=temp=newnode;
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    printf("Press 1 to enter more data or press 0 to exit: ");
    scanf("%d",&choice);
    count++;
    }
    printf(" \tPress 1 for INSERTION AT THE BEGINNING\n \tPress 2 for INSERTION AT THE END\n \tPress 3 for INSERTION AT A SPECIFIED POSITION\n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1: IAB();break;
        case 2: IAE();break;
        case 3: IAP();break;
    }
    temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    return 0; 
}
void IAB()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void IAE()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void IAP()
{
    int position,i=1;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the position after which you want to add data:- ");
    scanf("%d",&position);
    if(position>count)
    {
        printf("Invalid position, Try Again!");
    }
    else
    {
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<position)
        {
            temp=temp->next;
            i++;
        }

        newnode->next=temp->next;
        temp->next=newnode;
    }

}