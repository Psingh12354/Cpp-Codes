#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp=0,r;
	while(n!=0)
	{
		r=n%10;
		temp=temp*10+r;
		n=n/10;
	}
	cout<<"Reverse is "<<temp;
}
