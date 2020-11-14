#include<iostream>
using namespace std;
int main()
{
	int l,b,sum=0,count1=0,count2=0;
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
		for(int i=1;i<=l;i++)
		{
			count1+=i;
		}
		sum=count1*count1;
	}
	else
	if(l!=b)
	{
		for(int i=1;i<=l;i++)
		{
			count1+=i;
		}
		for(int i=1;i<=b;i++)
		{
			count2+=i;
		}
		sum=count1*count2;
	}
	cout<<"Number of rectangle is : "<<sum;
	return 0;
}

