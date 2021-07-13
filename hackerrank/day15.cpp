#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

    Node* insert(Node *head,int d)
    {
        Node* newnode= new Node(d);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=0)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        return head;
    }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T--){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}