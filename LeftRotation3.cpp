#include<iostream>
#include <algorithm>
#include<ostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d=2;
	rotate(arr,arr+n-(d%n),arr+n);
	cout.write( arr, n );
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
}
