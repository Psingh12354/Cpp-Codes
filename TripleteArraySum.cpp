#include<iostream>
using namespace std;
int main()
{
	int sum;
	cin>>sum;
	int arr[]={10,12,15,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			for(int k=i;k<j;k++)
			{
				if(arr[i]+arr[j]+arr[k]==sum)
				{
					cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<arr[i]+arr[j];
			 	}
			}
		}
	}
}
