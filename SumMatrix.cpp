#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5],sum[5][5],i,j,r,c;
	cout<<"Enter the number of row :"<<endl;
	cin>>r;
	cout<<"Enter the number of column :"<<endl;
	cin>>c;
	cout<<"Enter the value of matrix 1 : "<<endl;
	for(i=0;i<=r;i++)
	{
		for(j=0;j<=c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the value of Matrix 2 :"<<endl;
		for(i=0;i<=r;i++)
	{
		for(j=0;j<=c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Output of matrix is : "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			cout<<sum[i][j]<<" ";
		}
	}	
	return 0;
}
