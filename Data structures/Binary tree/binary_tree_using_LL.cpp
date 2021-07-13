#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node *root;
struct node *create()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"\nEnter data(-1 to enter no data): ";
    cin>>newnode->data;
    if(newnode->data==-1)
    {
        return 0;
    }
    else
    {
        cout<<"\nEnter left node of "<<newnode->data;
        newnode->left=create();
        cout<<"\nEnter right node of "<<newnode->data;
        newnode->right=create();
        return(newnode);
    }
}
void preorder(struct node *root)
{
    if(root!=0)
    {
        cout<<" "<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if(root!=0)
    {
        inorder(root->left);
        cout<<" "<<root->data;
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=0)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<" "<<root->data;
    }
}
int main()
{
    root=create();
    cout<<"Preorder traversal of the tree is ";
    preorder(root);
    cout<<"\nInorder traversal of the tree is ";
    inorder(root);
    cout<<"\nPostorder traversal of the tree is ";
    postorder(root);
    return 0;
}