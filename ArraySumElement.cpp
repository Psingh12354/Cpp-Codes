#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum,num;
	cout<<"Enter the number to find the sum : ";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(arr[i]+arr[j]==num)
			{
				sum=arr[i]+arr[j];
				cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<"\n";
			}
		}
	}
}
