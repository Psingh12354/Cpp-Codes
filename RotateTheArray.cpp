#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int rot,temp;
	cout<<"Enter the element to rotate : ";
	cin>>rot;
	for(int i=0;i<(n-rot);i++)
	{
		for(int j=n;j>rot;j--)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
