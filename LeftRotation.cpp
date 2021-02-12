#include<iostream>
using namespace std;
int main()
{
	int arr[]={1, 2, 3, 4, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d;
	cin>>d;
	for(int i=0;i<d;i++){
		int temp=arr[0];
		for(int j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
	arr[n-1]=temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
