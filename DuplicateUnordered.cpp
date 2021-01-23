#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;
void unique(int arr[],int n){
	unordered_set<int> set;
	for(int i=0;i<n;i++){
		if(set.find(arr[i])==set.end()){
			set.insert(arr[i]);
			cout<<arr[i]<<" ";
		}
	}
	
}
int main()
{
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/arr[0];
	unique(arr,n);
}
