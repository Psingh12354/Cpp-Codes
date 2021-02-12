#include<iostream>
using namespace std;
int main()
{
	int arr[]={1, 2, 3, 4, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d;
	cin>>d;
	int arr1[d];
	for(int i=0;i<n;i++)
	{
		cout<<arr[(i+d)%n]<<" ";
	}
	
}
