#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *head,*tail,*temp;
int count=0;
int main()
{
    void create();
    void del_from_beg();
    void del_from_end();
    void del_from_pos();
    void display();
    create();
    int op,x;
    while (x)
    {
        printf("Press 1 to delete from the beginning\nPress 2 to delete from the end\nPress 3 to delete from any specified position ");
        scanf("%d",&op);
        switch(op)
        {
            case 1: del_from_beg();break;
            case 2: del_from_end();break;
            case 3: del_from_pos();break;
        }
        display();
        printf("\nPress 1 to perform more operations or Perss 0 to exit");
        scanf("%d",&x);
    }
}
void create()
{
    struct node *newnode;
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
void del_from_beg()
{
    temp=head->next;
    temp->prev=tail;
    tail->next=temp;
    free(head);
    head=temp;
    count--;
}
void del_from_end()
{
    temp=tail->prev;
    temp->next=head;
    head->prev=temp;
    free(tail);
    tail=temp;
    count--;
}
void del_from_pos()
{
    int i=1,pos;
    printf("Enter the position from where you want to delete data: ");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Invalid position");
        del_from_pos();
    }
    else if(pos==1)
    {
        del_from_beg();
    }
    else if(pos==count)
    {
        del_from_end();
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        free(temp);
    }
}
void display()
{
    temp=head;
    printf("Your list is: ");
    while(temp!=tail)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);
}