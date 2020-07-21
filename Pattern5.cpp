#include<iostream>
using namespace std;
int main()
{
	int n;
	int num=1;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<"\n";
	}
	return 0;
}
