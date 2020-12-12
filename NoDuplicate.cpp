#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int flag=1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=0;
				cout<<"True";
			}
		}
	}
	if(flag==1)
	{
		cout<<"False";
	}
}
