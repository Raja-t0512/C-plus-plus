#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *tail,*temp;
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
    int choice=1;
    struct node *newnode;
    tail=0;
    while(choice){
    newnode= (struct node *)malloc(sizeof(struct node));
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
        tail=newnode;
    }
    tail->next=temp;
    printf("Press 1 to enter more data or press 0 to exit");
    scanf("%d",&choice);
    }
}
void reverse()
{
    struct node *prev,*n;
    prev=tail->next;
    temp=prev->next;
    n=temp->next;
    prev->next=tail;
    tail=prev;
    while(temp!=tail)
    {
        temp->next=prev;
        prev=temp;
        temp=n;
        n=n->next;
    }   
}
void display()
{
    temp=tail->next;
    while(temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}