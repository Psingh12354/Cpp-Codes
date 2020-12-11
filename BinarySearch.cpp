#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,beg=0,mid,last,search;
	cout<<"Enter the size : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"Enter the element to search : ";
	cin>>search;
	last=n-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(search==arr[mid])
		{
			cout<<"Element found at : "<<mid+1<<endl;
			break;
		}
		else
		if(arr[mid]<search)
		{
			beg=mid+1; // when element are on right side
		}
		else
		if(arr[mid]>search)
		{
			last=mid-1; // when element on left side.
		}
	}
	if(beg>last)
	{
		cout<<"Element not found!";
	}
	return 0;
}
