#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void Insert(Node **head_ref,int new_data)
{
	Node *new_node=new Node();
    Node * last = * head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
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
	Node *second=new Node();
	Node *third=new Node();
	head->data=1;
	head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
	print(head);
	cout<<"\n";
	cout<<"You can see the diffrence.\n";
	Insert(&head,4);
	print(head);
}
