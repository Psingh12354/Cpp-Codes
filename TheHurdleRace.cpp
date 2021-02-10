#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={2,5,4,5,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k;
	cin>>k;
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	max>k?cout<<max-k:cout<<"0";
}
