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
struct node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = create(data);
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
bool search(int a)
{
    struct node *temp;
    temp = root;
    while (temp != 0)
    {
        if (temp->data == a)
        {
            return 1;
            break;
        }
        else if (a < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return 0;
}
void preorder(struct node* root)
{
    if(root!=0)
    {
        cout<<" "<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    int n, x, s;
    root = NULL;
    cout << "\n\n\t\t\t*****BINARY SEARCH TREE*****" << endl;
    cout << "Enter the number of elements you want to insert in the tree: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter element no. " << i << ": ";
        cin >> x;
        root = insert(root, x);
    }
    cout<<endl<<"Preorder traversal of this tree is ";
    preorder(root);
    cout << "\nEnter the number you want to search: ";
    cin >> s;
    if (search(s) == true)
    {
        cout << "Element Found!" << endl;
    }
    else
    {
        cout << "Element not Found!" << endl;
    }

    return 0;
}