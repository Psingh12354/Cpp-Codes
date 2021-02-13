#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={4,6,5,3,3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int len=0,start=0,count=1;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
	if(arr[i]-arr[start]>=2){
		count=1;
		len=max(len,i-start);
		start=i;
	} 
	else
	{
		count+=1;
	} 
	}
	cout<<max(len,count);
}
