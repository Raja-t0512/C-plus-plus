#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
int main()
{
    int op,choice=1;
    void Push();
    void Pop();
    void Peek();
    void Display();
    while(choice)
    {
        cout<<"Press 1 to push data\nPress 2 to pop data\nPress 3 to peek the topmost element\nPress 4 to display the stack\n";
        cin>>op;
        switch(op)
        {
            case 1:Push();break;
            case 2:Pop();break;
            case 3:Peek();break;
            case 4:Display();break;
        }
        cout<<"\nPress 1 to perform more operations or press 0 to exit: ";
        cin>>choice;
    }   
}
void Push()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter data";
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
}
void Pop()
{
    if(top==0)
    {
        cout<<"Stack Empty!";
    }
    else
    {
        struct node *temp;
        temp=top;
        cout<<top->data<<" is removed from stack";
        top=top->next;
        free(temp);
    }
}
void Peek()
{
    if(top==0)
    {
        cout<<"Stack Empty!";
    }
    else
    {
        cout<<"\nTopmost element is "<<top->data;
    }
}
void Display()
{
    struct node *temp;
    temp=top;
    while(temp!=0)
    {
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
}