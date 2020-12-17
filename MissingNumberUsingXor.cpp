#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum^=arr[i];
	}
	for(int i=1;i<=n+1;i++)
	{
		sum^=i;
	}
	cout<<sum;	
}
