#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int temp=0;
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	cout<<"Enter the value of array : "<<endl;
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	temp=a[0];
	a[0]=a[n];
	a[n]=temp;
	cout<<"After Swap : "<<a[0]<<" and "<<a[n]<<endl;
	return 0;
}
