#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n];
	
	int count1=0;
	int count2=0;
	for(char i=0;i<=n;i++)
	{
		cin>>arr[i];
		for(char j='A';j<='Z';j++)
		{
			if(arr[j]<13)
			{
				for(int k=0;k<n/2;k++)
				{
					count1+=1;
				}
			}
			
			if(arr[j]>13)
			{
				for(int k=n;k>n/2;k--)
				{	
					count2+=1;
				}
			}
		}
	}
	if(count1>count2)
	{
		cout<<"Count 2 : "<<count2;
	}
	else
	cout<<"Count 1 : "<<count1;
}
