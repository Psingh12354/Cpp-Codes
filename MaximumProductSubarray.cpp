#include<iostream>
using namespace std;
int main()
{
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int o_max=arr[0];
	int c_max=arr[0];
	for(int i=0;i<n;i++)
	{
		c_max=max(arr[i],c_max*arr[i]);
		o_max=max(c_max,o_max); 
	}
	cout<<o_max;
}
