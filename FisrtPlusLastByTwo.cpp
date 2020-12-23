#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	float count=0;
	for(int i=0;i<n/2;i++)
	{
		for(int j=n-1;j>=n/2;j--)
		{
			cout<<"\nArr[i]= "<<arr[i]<<" and arr[j]= "<<arr[j]<<"\n";
			count=(arr[i]+arr[j])/2;
			cout<<"\ncount : "<<count;
		}
	}
	cout<<count;
}
