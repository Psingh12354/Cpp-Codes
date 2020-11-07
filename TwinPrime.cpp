#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of twin prime.\n";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int p=i-j;
			if((p)==2 && i%2!=0 && j%2!=0)
				{
				cout<<i<<"-"<<j<<" is twin prime"<<endl;
				}
		}
	}
	return 0;
}
