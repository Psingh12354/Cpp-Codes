#include<iostream>
using namespace std;
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int n = sizeof(a)/sizeof(a[0]); 
	int cs=0,ms=0,left,right; // currentsum and maximum sum
	for(int i=0;i<n;i++)
	{
		int temp=0;
		for(int j=i+1;j<n;j++)
		{
			int cs=0;
			for(int k=i;k<j;k++)
			{
				cs+=a[k];
			}
			if(cs>ms)
			{
				ms=cs;
				left=i;
				right=j;
			}
		}
	}
	for(int i=left;i<right;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nSum : "<<ms;

}
