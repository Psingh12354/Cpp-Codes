/*Binary Search Tree is a node-based binary tree data structure which has the following properties:
Here we access through root node
The left subtree of a node contains only nodes with keys lesser than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
The left and right subtree each must also be a binary search tree.
*/
#include<iostream>
using namespace std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right; //Node* is pointer to reference
};
BstNode* NewNode(int data)
{
	BstNode* newNode=new BstNode();
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
/*
void Insert(BstNode** root,int data)
{
	if(*root==NULL)
	{
		*root=NewNode(data);
	}
}
int main()
{
	BstNode* root=NULL; // create an emppty tree
	Insert(&root,15);
	Insert(&root,10);
	Insert(&root,20);
}*/
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = NewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
bool Search(BstNode* root,int data)
{
	if(root==NULL) return false;
	else if(root->data==data) return true;
	else if(data<=root->data) return Search(root->left,data);
	else return Search(root->right,data);
}
int main()
{
	BstNode* root=NULL; // create an emppty tree
	root=Insert(root,15);
	root= Insert(root,10);//here you have to define for each
	root=Insert(root,20);
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	if(Search(root,num)==true) cout<<"Found\n";
	else cout<<"Not found\n";
}
