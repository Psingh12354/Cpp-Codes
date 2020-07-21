#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
void Insert(Node* n){
	if(n->left)
	Insert(n->left);
	cout<<n->data<<endl;
	if(n->right)
	Insert(n->right);
}
int main()
{
	Node* A=new Node();
	Node* B=new Node();
	Node* C=new Node();
	Node* D=new Node();
	Node* E=new Node();
	Node* F=new Node();
	Node* G=new Node();
	A->data=15;
	A->left=B;
	A->right=C;
	B->left=D;
	B->right=E;
	C->left=F;
	C->right=G;
	B->data=3;
	C->data=20;
	D->data=2;
	E->data=7;
	F->data=18;
	G->data=25;
	Insert(A);
}
