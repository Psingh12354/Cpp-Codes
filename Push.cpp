/* Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)
Stack start from -1 in c and 0 in c++
if you push a element in stack top<-top+1
if you remove a element in stack top<-top-1
to call a top element just return it
to check isEmpty()
if(top==-1)
return true 
else
return false
*/
#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=0;
void push(int x)
{	
	if(top==MAX_SIZE-1)
	{
		cout<<"Overflow stack"<<endl;
	}
	top++;
	A[top]=x;
	// A[++top]=x;
}
void pop()
{
	if(top==0)
	{
		cout<<"Empty stack"<<endl;
		return;
	}
	top--;
}
int Top(){
	return A[top];
}
void print()
{
	int i;
	cout<<"Stack : "<<endl;
	for(i=0;i<=top;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	push(5);
	print();
	push(6);
	print();
	pop();
	print();
	push(65);
	print();
	Top();
	print();
	cout<<Top();
	return 0;
}

















