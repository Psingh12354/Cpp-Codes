#include<iostream>
using namespace std;
int main()
{
	int a[5][5],b[5][5],c[10][10],r1,c1,r2,c2;
	cout<<"Enter the values of Matrix A : "<<endl;
	cin>>r1>>c1;
	cout<<"Enter the value of Matrix B : "<<endl;
	cin>>r2>>c2;
	if (c1!=r2)
	{
		cout<<"Matrix couldn't multiplied"<<endl;
		exit(0);
	}
	for(int i=0;i<=r1;i++)
	{
		for(int j=0;j<=c1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=r2;i++)
	{
		for(int j=0;j<=c2;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<=r1;i++)
	{
		for(int j=0;j<=c2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<=r2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<"Product of matrix is given below : "<<endl;
	for(int i=0;i<=r1;i++)
	{
		for(int j=0;j<=c2;j++)
		{
			cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
	
	
}
