#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void Insert(Node **head_ref,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void print(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node *head=new Node();
	Insert(&head,5);
	Insert(&head,55);
	Insert(&head,56);
	Insert(&head,57);
	print(head);
}
