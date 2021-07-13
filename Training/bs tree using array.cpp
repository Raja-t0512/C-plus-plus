#include <iostream>
using namespace std;

// Using array
char tree[10];
void root(char a)
{
    if(tree[0]!='\0')
    {
        cout<<"Node is already filled";
    }
    else
    {
        tree[0]=a;
    }
}
void left(char k, int p)
{
    if(tree[p]=='\0')
    {
        cout<<"Cannot insert child without a parent";
    }
    else
    {
        tree[2*p+1]=k;
    }
}
void right(char k, int p)
{
    if(tree[p]=='\0')
    {
        cout<<"Cannot insert child without a parent";
    }
    else
    {
        tree[2*p+2]=k;
    }
}
void display()
{
    for (int  i = 0; i < 10; i++)
    {
        if(tree[i]=='\0')
        {
            cout<<"--"<<endl;
        }
        else
        {
            cout<<tree[i]<<endl;
        }
        
    }
    
}
int main()
{
    root('A');
    left('B',0);
    right('C',0);
    left('D',1);
    right('E',2);
    display();
    return 0;
}

// Using linked list
// class node
// {
// public:
//     int data;
//     node *left, *right;
// };

// node *root;

// node *create()
// {
//     node *newnode;
//     newnode = new node;
//     cout << "\nEnter data(-1 to enter no data): ";
//     cin >> newnode->data;
//     if (newnode->data == -1)
//     {
//         return 0;
//     }
//     else
//     {
//         cout << "\nEnter left node of " << newnode->data;
//         newnode->left = create();
//         cout << "\nEnter right node of " << newnode->data;
//         newnode->right = create();
//         return (newnode);
//     }
// }

// void inorder(node *root)
// {
//     if (root != 0)
//     {
//         inorder(root->left);
//         cout << " " << root->data;
//         inorder(root->right);
//     }
// }

// int main()
// {
//     root = create();
//     cout << "Inorder traversal is ";
//     inorder(root);
//     return 0;
// }