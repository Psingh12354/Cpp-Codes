#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 5, 4, 11, 2, 40 };
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		int temp=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[temp]>arr[j])
			{
				temp=j;
			}
	 	}
	 	swap(arr[i],arr[temp]);
		cout<<endl;
		for(int k=0;k<n;k++)
		{
			cout<<arr[k]<<"\t";
		}
	}
	cout<<"\nAfter sorting : \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
