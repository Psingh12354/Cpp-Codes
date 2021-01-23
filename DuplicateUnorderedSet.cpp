#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;
void unique(int arr[],int n){
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		while(i<n-1 && arr[i]==arr[i+1]){
			i++;
		}	
		cout<<arr[i]<<" ";
	}	
}

int main()
{
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/arr[0];
	unique(arr,n);
}
