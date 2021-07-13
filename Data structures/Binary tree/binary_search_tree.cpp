#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root;
struct node *newnode(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    newnode->left = 0;
    newnode->right = 0;
    return newnode;
}
struct node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = newnode(data);
        return root;
    }
    else
    {
        if (data <= root->data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
    }
    return root;
}
// bool search(int x)
// {
//     struct node *temp;
//     temp = root;
//     while (temp != 0)
//     {
//         if (temp->data == x)
//         {
//             return 1;
//             break;
//         }
//         else if (temp->data <= x)
//         {
//             temp = temp->right;
//         }
//         else
//         {
//             temp = temp->left;
//         }
//     }
//     return 0;
// }
void preorder(node *root)
{
    if(root!=0)
    {
        cout<<" "<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if(root!=0)
    {
        inorder(root->left);
        cout<<" "<<root->data;
        inorder(root->right);
    }
}
void postorder(node *root)
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
    cout<<"\n\n\t\t\t*****BINARY SEARCH TREE*****"<<endl;
    int n,i,x,y;
    cout<<"Enter the number of elements you want to insert: ";
    cin>>n;
    root = NULL;
    for(i=1;i<=n;i++){
        cout<<endl<<"Enter element no. "<<i<<" : ";
        cin>>x;
        root = insert(root, x);
    }
    cout<<"Preorder traversal of the tree is ";
    preorder(root);
    cout<<"\nInorder traversal of the tree is ";
    inorder(root);
    cout<<"\nPostorder traversal of the tree is ";
    postorder(root);
    cout<<endl<<"Enter the number you want to search in the BST: ";
    cin>>y;
    // if (search(y) == true)
    // {
    //     cout << "\nFound!" << endl;
    // }
    // else
    // {
    //     cout << "Not found!" << endl;
    // }
    return 0;
}