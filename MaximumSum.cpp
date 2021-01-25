#include<iostream>
using namespace std;
int main()
{
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=0;
	int cs=0;
	int start,end;
	for(int i=0;i<n-1;i++){
		int sum=0;
		for(int j=i+1;j<n;j++){
			int cs=0;
			for(int k=i;k<j;k++){
				cs+=arr[k];
			}
			if(cs>max){
				start=i;
				end=j;
				max=cs;
			}
		}
	}
	cout<<"Maximum sum is : "<<max<<"\n";
	cout<<"Start at "<<start<<" and end at "<<end;
	return 0;
}
