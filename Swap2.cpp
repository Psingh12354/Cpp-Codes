#include<iostream>
using namespace std;
int main()
{
	int a,b,temp=0;
	cout<<"C++ program to swap two numbers : "<<endl;
	cout<<"enter the value of a and b : "<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value of a and b after swap "<<a<<" and "<<b<<endl;
	return 0;
}
