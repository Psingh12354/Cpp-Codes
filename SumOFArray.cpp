#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter array element : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of array element is : "<<sum;
}
