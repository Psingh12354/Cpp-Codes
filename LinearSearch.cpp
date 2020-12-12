#include<iostream>
using namespace std;
int Linear(int search,int n,int arr[])
{
	bool flag=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			flag=0;
			cout<<"Element found at : "<<i;
		}
	}
	if(flag==1)
	{
		cout<<"Element not found";
	}
	
}
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int search;
	cin>>search;
	Linear(search,n,arr);
	return 0;
}
