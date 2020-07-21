#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(i=1;i<10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		sum+=n*i;
	}
	cout<<"Total Sum = "<<sum<<endl;
	return 0;
}
