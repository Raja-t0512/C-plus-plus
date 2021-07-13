#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
int choice=1,count=0;
int main()
{
    void DAB();
    void DAE();
    void DAP();
    int operation;
    head=0;
    while(choice)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Press 1 to enter more data or press 0 to exit: ");
    scanf("%d",&choice);
    count++;
    }
    printf(" \tPress 1 for DELETION AT THE BEGINNING\n \tPress 2 for DELETION AT THE END\n \tPress 3 for DELETION AT A SPECIFIED POSITION\n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1: DAB();break;
        case 2: DAE();break;
        case 3: DAP();break;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void DAB()
{
    struct node* temp;
    temp = head;
    head = temp->next;
    free(temp);
}
void DAE()
{
    struct node* temp;
    temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;    
}
void DAP()
{
    struct node *temp,*position;
    int pos,i=1;
    printf("Enter the position from where you want to delete the element:- ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Type a valid position!");
    }
    else
    {
        temp = head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        position=temp->next;
        temp->next=temp->next->next;
        free(position);
    }
}