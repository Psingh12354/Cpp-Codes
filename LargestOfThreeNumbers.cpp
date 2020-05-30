#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Program to find largest of two numbers :"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is largest."<<endl;
	}
	else
	if(b>a && b>c)
	{
		cout<<b<<" is largest."<<endl;
	}
	else
	{
		cout<<c<<" is largest."<<endl;
	}
	return 0;
}
