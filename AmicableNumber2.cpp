#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the num1 and num2 : ";
	cin>>x>>y;
	int sum1=0,sum2=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0){
			sum1+=i;
		}
	}
	for(int j=1;j<y;j++)
	{
		if(y%j==0)
		{
			sum2+=j;
		}
	}
	sum1=sum2?cout<<"Number is Amicable number":cout<<"Number is not Amicable number";
	return 0;
}
