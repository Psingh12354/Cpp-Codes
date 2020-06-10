#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the number to swap :"<<endl;
	cin>>a>>b;
	cout<<"Before Swap :"<<endl;
	cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swap :"<<endl;
	cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
	return 0;
}
