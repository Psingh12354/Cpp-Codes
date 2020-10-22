#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,j;
	cout<<"Enter the number of rows : \n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
	
}
