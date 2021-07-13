#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *tail,*temp;
int count=0;
int main()
{
    int op,choice1=1;
    void create();
    void del_from_beg();
    void del_from_end();
    void del_from_pos();
    void display();
    create();
    while(choice1)
    {
        printf("Press 1 to delete fist element\nPress 2 to delete last element\nPress 3 to delete element from any position\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: del_from_beg();break;
            case 2: del_from_end();break;
            case 3: del_from_pos();break;
        }
        display();
        printf("\nPress 1 to perform more operations or press 0 to exit");
        scanf("%d",&choice1);
    }
}
void create()
{
    int choice=1;
    struct node *newnode;
    tail=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
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
        count++;
        printf("Press 1 to enter more data or press 0 to exit");
        scanf("%d",&choice);
    }
}
void display()
{
    temp = tail->next;
    printf("List is: ");
    while(temp!=tail)
    {    
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("->%d",temp->data);    
}
    void del_from_beg()
    {
        temp=tail->next;
        tail->next=temp->next;
        free(temp);
        count--;
    }
    void del_from_end()
    {
        struct node* prev;
        temp=tail->next;
        prev=temp;
        while(prev->next!=tail)
        {
            prev=prev->next;
        }
        free(prev->next);
        prev->next=temp;
        tail=prev;
        count--;
    }
    void del_from_pos()
    {
        int pos;
        printf("Enter the position from where you want to delete the element");
        scanf("%d",&pos);
        if(pos>count)
        {
            printf("Invalid position!");
            del_from_pos();
        }
        else if(pos==1)
        del_from_beg();
        else if(pos==count)
        del_from_end();
        else
        {
            struct node *current;
            int i=1;
            temp=tail->next;
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }
            current = temp->next;
            temp->next=temp->next->next;
            free(current);
        }
    }