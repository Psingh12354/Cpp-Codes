#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	int k;
	k=2*n-2;
	for(int i=0;i<=n;i++)
	{	
		for(int j=0;j<=k+1;j++)
		{
			cout<<" ";
		}
		k=k-2;
		for(int j=0;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
