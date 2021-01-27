#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	//sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		int temp=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			count=arr[i];
		}
	}
	cout<<count;
	return 0;
}
