#include<iostream>
using namespace std;
int main()
{	
	int x,y;
	int sum1=0,sum2=0;
	cout<<"Program for amicable number : \n";
	cout<<"Enter the number 1 : \n";
	cin>>x;
	cout<<"Enter the number 2 : \n";
	cin>>y;
	for(int i=0;i<=x;i++)
	{
		if(x%i==0)
		{
			sum1+=i;
		}
	}
	for(int j=0;j<=y;j++)
	{
		if(y%j==0)
		{
			sum2+=j;
		}
	}
	if(sum2==x && sum1==y)
	{
		cout<<"Number is Amicable \n";
	}
	else
	{
		cout<<"Number is not Amicable \n";
	}
	return 0;
}
