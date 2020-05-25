// Function with return method
// Here we first take the sum of two number and than we multiply it by constant number
#include<iostream>
using namespace std;
int sum(int a,int b)
{
	int result=0;
	result=a+b;
	return result;
}
int main()
{
	int mul=2;
	int Result;
	int m,n;
	cout<<"Enter the two number : "<<endl;
	cin>>m>>n; 
	Result=mul*sum(m,n);
	cout<<"The Final output is : "<<Result<<endl;
	return 0;
}
