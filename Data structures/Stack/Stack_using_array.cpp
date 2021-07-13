#include<iostream>
using namespace std;
#define N 5
int Stack[N];
int top = -1;
int main()
{
    int choice=1,op;
    void Push();
    void Pop();
    void Peek();
    void Display();
    while(choice)
    {
        cout<<"Press 1 to push data\nPress 2 to pop data\nPress 3 to peek the topmost element\nPress 4 to display the stack";
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
    int x;
    cout<<"Enter data you want to push: ";
    cin>>x;
    if(top==N-1)
    {
        cout<<"Overflow!";
    }
    else
    {
        top++;
        Stack[top]=x;
    }
}
void Pop()
{
    if(top==-1)
    {
        cout<<"Underflow!";
    }
    else
    {
        int x;
        x=Stack[top];
        cout<<x<< " was deleted";
        top--;
    }
}
void Peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty!";
    }
    else
    {
        cout<<"Top most element is "<<Stack[top];
    }
}
void Display()
{
    if(top==-1)
    {
        cout<<"Stack is Empty!";
    }
    else
    {
        cout<<"Stack is ";
        for(int i=top;i>=0;i--)
        {
            cout<<Stack[i]<<" ";
        }
    }
}