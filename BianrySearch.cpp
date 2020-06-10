#include<iostream>
using namespace std;
int main()
{
	int a[10],n,beg,i,mid,last;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cout<<"Number of element"<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"number are"<<endl;
	beg=0;
	last=n-1;
	mid=(beg+last)/2;
	while(beg<=last)
	{
		if(a[mid]<n)
		{
			beg=mid+1;
		}
		else
		if(a[mid]==n)
		{
			cout<<"Element found at poistion mid : "<<mid+1<<endl;
			break;
		}
		else
		{
			last=mid-1;
			mid=(beg+last)/2;
		}
	}
	if(beg>last)
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
		
}
