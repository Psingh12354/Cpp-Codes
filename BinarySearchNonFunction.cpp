#include<iostream>
using namespace std;
int main()
{
	int n,first,last,mid;
	int arr[100],x;
	cout<<"Enter the size of array : "<<endl;
	cin>>x;
	cout<<"Enter the atleast 10 element in array : "<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element which you are searching for in array : "<<endl;
	cin>>n;
	first=0;
	last=x-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		
		if(arr[mid]<n)
		{
			first=mid+1;
		}
		else
		if(arr[mid]==n)
		{
			cout<<"Element found at position : "<<mid+1<<endl;
			break;
		}
		else
		if(arr[mid]>n)
		{
			last=x-1;
		}
		mid=(first+last)/2;
	}
	if(first>last)
	{
		cout<<"Element not found in array"<<endl;
	}
	return 0;
	
}
