#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr{1,3,2,2,5,4,5};
	int k=0;
	// loop will go upto 7 digit
	for(int i=0;i<7;i++){
		k=max(k,arr[i]);
	}
	vector<int> count{0};
	for(int i=0;i<7;i++){
		count[arr[i]]++; // arr[1]=1 count[1]+=1; 
	}
	// upto this much we have 0,1,2,1,1,2
	for(int i=1;i<=k;i++){
		count[i]+=count[i-1]; //output is 7
	}
	int output[7];
	for(int i=7-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	for(int i=0;i<7;i++){
		arr[i]=output[i];
	}
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
}
