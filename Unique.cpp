#include<iostream>
using namespace std;
int main()
{
	int arr[]={1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
	int s1=sizeof(arr)/sizeof(arr[0]);
	cout<<"Original array : "<<endl;
	for(int i=0;i<s1;i++)
	cout<<arr[i]<<" ";
	
	cout<<"\nCommon elements of the said array : "<<endl;
	for(int i=0;i<s1;i++)
	{
		int j;
		for(j=0;j<i;j++)
		if(arr[i]==arr[j])
		break;
		if(i==j)
		cout<<arr[i]<<" ";
	}
	return 0;
}

