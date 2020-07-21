#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* Delete(Node *root,int data)
{
	if(root==NULL) return root;
	else if(data<root->data) root->left=Delete(root->left,data);
	else if(data>root->data) root->right=Delete(root->right,data);
	else // no child
	{
		if(root->left==NULL && root->right==NULL)
		{
		delete root;
		root=NULL;
		}
		else if(root->left==NULL)
		{
			Node *temp=root;
			root=root->right;
			delete temp;

		}
		else if(root->right==NULL)
		{
			Node *temp=root;
			root=root->left;
			delete temp;
		}
		//2 children
		else
		{
			Node *temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
return root;
}
int main()
{
	
}
