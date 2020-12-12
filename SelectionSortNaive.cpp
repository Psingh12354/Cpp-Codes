#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 2, 3, 11, 9, 40 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp;
	for(int i=0;i<n-1;i++)
	{
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
	cout<<"After sorting : \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
