#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=pow(2,n);
	for(int i=0;i<count;i++){
		for(int j=0;j<n;j++){
			if((i&(i<<j))!=0){
				cout<<arr[j]<<" ";
			}
		}
		cout<<"\n";
	}
}
