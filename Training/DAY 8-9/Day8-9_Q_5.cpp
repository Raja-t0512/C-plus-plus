// IMPLEMENT QUEUE USING STACKS
#include<iostream>
using namespace std;
#define N 5
int stack1[N],stack2[N];
int top1=-1,top2=-1,count=0;
void push1(int x) //Function to push elements to stack1
{
    if(top1==N-1)
    {
        cout<<"\t\t\t*****Queue Overflow*****";
    }
    else if(top1==-1)
    {
        top1=0;
        stack1[top1]=x;
    }
    else 
    {
        top1++;
        stack1[top1]=x;
    }
}
int pop1()//Function to pop elements from stack1
{
    int x;
    if(top1==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else
    {  
        x=stack1[top1];
        top1--;
        return x;
    }
    return 0;
}
void push2(int x)//Function to push elements to stack2
{
    if(top2==N-1)
    {
        cout<<"\t\t\t*****Queue Overflow*****";
    }
    else if(top2==-1)
    {
        top2=0;
        stack2[top2]=x;
    }
    else 
    {
        top2++;
        stack2[top2]=x;
    }
}
int pop2()//Function to pop elements from stack2
{
    if(top2==-1)
    {
        cout<<"\t\t\t*****Queue Underflow*****";
    }
    else
    {
        int x;
        x=stack2[top2];
        top2--;
        return x;
    }
    return 0;
}
void enqueue()
{
    int x;
    cout<<"Enter data: ";
    cin>>x;
    push1(x);
    count++;
}
void dequeue()
{
    int i,a,b;
    for(i=0;i<count;i++)
    {
        a=pop1(); 
        push2(a); //push all the elements from stack1 to stack2 
    }
    b=pop2(); //pop the top of stack2
    cout<<b<<" was removed";
    count--;
    for(i=0;i<count;i++) 
    {
        a=pop2();
        push1(a); //push all the elements back from stack2 to stack1 
    }
}
void display()
{
    if(top1==-1)
    {
        cout<<"Queue is Empty!";
    }
    else
    {
        cout<<"Queue is ";
        for(int i=0;i<=top1;i++)
        {
            cout<<stack1[i]<<" ";
        }
    }
}
int main()
{
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
    void enqueue();
    void dequeue();
    void display();
    int choice,op=1;
    while(op)
    {
        cout<<"Press 1 to add data\nPress 2 to delete front\nPress 3 to display\n";
        cin>>choice;
        switch(choice)
        {
        case 1: enqueue();break;
        case 2: dequeue();break;
        case 3: display();break;
        default: cout<<"\nPress 1-3 only!\n";break;
        }
        cout<<"\nPress 1 to perform another operation or press 0 to exit: ";
        cin>>op;
    }
}