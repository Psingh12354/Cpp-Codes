#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;
};
void traverse(Node *n){
	while(n!=NULL)
	{
		cout<<n->data<<"<==>";
		n=n->next;
	}
}
int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* second=new Node();
	head->data=5;
	head->next=first;
	head->prev=NULL;
	first->data=6;
	first->next=second;
	first->prev=head;
	second->data=7;
	second->next=NULL;
	second->prev=first;
	cout<<"Traverse Linked list are : ";
	traverse(head);
}
