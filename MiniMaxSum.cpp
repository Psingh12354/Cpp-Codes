#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int Min(int a,int b){
	return a>b?b:a;
}
int main(){
	int arr[]={1,3,5,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n;i++){
		count+=arr[i];
		cout<<count<<" ";
	}
	cout<<endl;
	sort(arr+1,arr+n-1);
	cout<<count-arr[n-1]<<" "<<count-arr[0];
}
