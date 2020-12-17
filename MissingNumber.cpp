#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0],max=arr[0],sum;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	for(int i=0;i<=n;i++)
	{
		sum+=arr[i];
	}
	int Sum=(max*(max+1))/2;
	cout<<"Missing number is : "<<Sum-sum;
	
}
