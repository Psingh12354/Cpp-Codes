#include<iostream>
using namespace std;
int main()
{
	int n1,n2,count1=0,count2=0;
	cin>>n1>>n2;
	for(int i=1;i<=n1/2;i++)
	{
		if(n1%i==0)
		{
			count1+=i;
		}
	}
	for(int i=1;i<=n2/2;i++)
	{
		if(n2%i==0)
		{
			count2+=i;
		}
	}
	(count1==n2 && count2==n1)?cout<<"Number is amicable":cout<<"Number is not amicable";
}
