#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* head=new Node();
void InsertBeg(int new_data)
{
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
}
void traverse(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	head=NULL;
	int x,y;
	cout<<"Enter the number of node to insert\n";
	cin>>x;
	cout<<"Enter the nodes value : \n";
	for(int i=1;i<=x;i++)
	{
		cin>>y;
		InsertBeg(y);
	}
	cout<<"Linked list is : ";
	traverse(head);
	return 0;
}
