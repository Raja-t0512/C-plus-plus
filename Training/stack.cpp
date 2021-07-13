#include <iostream>
#include<stack>
using namespace std;
stack <int> s;
void Push()
{
    int choice=1;
    while(choice)
    {
        int x;
        cout<<"Enter data: ";
        cin>>x;
        s.push(x);
        cout<<"Press 1 to push more data or press 0 to exit.";
        cin>>choice;
    }
}
void Pop()
{
    s.pop();
}
void Peek()
{
    cout<<s.top();
}
void Display()
{
    stack<int> s1=s;
    cout<<"Your stack is ";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
void Is_Empty()
{
    if(s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<"Stack is not empty";
    }
}
int main()
{
    int choice=1,op;
    while (choice)
    {
        cout << "Press 1 to push data\nPress 2 to pop data\nPress 3 to peek the topmost element\nPress 4 to display the stack\nPress 5 to check whether the stack is empty or not\n";
        cin >> op;
        switch (op)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        case 5:
            Is_Empty();
            break;
        }
        cout << "\nPress 1 to perform more operations or press 0 to exit: ";
        cin >> choice;
    }

    return 0;
}