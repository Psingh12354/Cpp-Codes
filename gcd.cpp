#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int FindGcd(int arr[],int n)
{
	int result=arr[0];
	for(int i=1;i<=n;i++)
	result=gcd(arr[i],result);
	return result;
}
int main()
{
	int arr[]={343,432,132,432};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<FindGcd(arr,n)<<endl;
	return 0;
}
