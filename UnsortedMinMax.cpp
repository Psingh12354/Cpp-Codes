#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,1,2,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0],max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"Max : "<<max<<" and Min : "<<min;
}
