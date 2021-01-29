#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[]={1,2,3,1};
	int left,right;
	int n=sizeof(a)/sizeof(a[0]);
	int k,t;
	cin>>k>>t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<i+1+k;j++){
			if(j<n){
				if(abs(a[i]-a[j])<t){
					return true;
				}
			}
		}
	}return false;
}
