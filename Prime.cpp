#include<iostream>
using namespace std;
int main()
{
	int n,i;
	bool Prime=true;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			Prime=false;
			break;
		}
	}
	if(Prime)
	{
		cout<<n<<" is Prime number."<<endl;
	}
	else
	{
		cout<<n<<" is not a prime number."<<endl;
	}
	return 0;
}
