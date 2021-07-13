#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *tail,*head, *newnode,*temp;
int count=0;
int main()
{
    int choice=1;
    int operation;
    void create();
    void del_from_beg();
    void display();
    void delete_from_end();
    void delete_from_pos();
    create();
    while(choice)
    {
        printf("Press 1 for DELETION FROM THE BEGINNING\nPress 2 for DELETION FROM THE END\nPress 3 for DELETION FROM ANY POSITION");
        scanf("%d",&operation);
        switch(operation)
        {
            case 1: del_from_beg();break;
            case 2: delete_from_end();break;
            case 3: delete_from_pos();break;
        }
        printf("Press 1 to perform another operation or Press 0 to exit: ");
        scanf("%d",&choice);
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
void del_from_beg()
{
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
}

void delete_from_end()
{
    temp=tail;
    tail=tail->prev;
    tail->next=0;
}
void delete_from_pos()
{
    int i=1,pos;
    printf("Enter the position from where you want to delete data");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    temp->prev=0;
    temp->next=0;
    free(temp);

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
