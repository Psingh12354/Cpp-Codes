#include<iostream>
#include<algorithm>
#include <vector> 
using namespace std;
int main()
{
	int arr[]={0,1,0,3,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0){
			arr[count++]=arr[i];
		}
	}
	while(count<n){
		arr[count++]=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
