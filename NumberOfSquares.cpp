#include<iostream>
using namespace std;
int main()
{
	int l,b,sum=0;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter breadth : ";
	cin>>b;
	if(l==0)
	{
		sum=b;
	}
	else
	if(b==0)
	{
		sum=l;
	}
	else
	if(l==b)
	{
		sum=(l*(l+1)*(2*l+1))/6;
	}
	else
	if(l!=b)
	{
		sum=(l*b)+(l-1)*(b-1)+(l-2)*(b-2);
	}
	cout<<"Sum : "<<sum;
	return 0;
}
