#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
struct node *root;
struct node *create(int data)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = data;
    newnode->left = 0;
    newnode->right = 0;
    return newnode;
}
struct node *FindMin(node *root)
{
    if()
    {
        
    }
}
struct node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = create(data);
        return root;
    }
    else
    {
        if (data < root->data)
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
struct node *Delete(node *root, int number)
{
    struct node *temp;
    if (root == NULL)
    {
        return root;
    }
    else if (number < root->data)
    {
        Delete(root->left, number);
    }
    else if (number > root->data)
    {
        Delete(root->right, number);
    }
    else
    {
        if (root->left == 0 && root->right == 0)
        {
            root = NULL;
            delete root;
        }
        else if (root->left == 0)
        {
            temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == 0)
        {
            temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}
void inorder(struct node *root)
{
    if (root != 0)
    {
        inorder(root->left);
        cout << " " << root->data;
        inorder(root->right);
    }
}
int main()
{
    int x, n, del;
    root = NULL;
    cout << "\n\n\t\t\t*****BINARY SEARCH TREE*****" << endl;
    cout << "\nEnter the number of elements you want to insert: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter element no. " << i << ": ";
        cin >> x;
        root = insert(root, x);
    }
    cout << endl
         << "Inorder traversal of this tree is ";
    inorder(root);
    cout << "Enter the node you want to delete";
    cin >> del;
    root = Delete(root, del);
    cout << endl
         << "Inorder traversal after deletion is ";
    inorder(root);
    return 0;
}