#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
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
	Node *first=new Node();
	head->data=5;
	head->next=first;
	first->data=65;
	first->next=NULL;
	print(head);
	
}
