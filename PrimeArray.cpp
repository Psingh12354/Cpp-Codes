#include<iostream>
using namespace std;
int isPrimeNumber(int n)
{
	bool isPrime=1;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isPrime=0;
			break;
		}
	}
	return isPrime;
}
int main()
{
	bool isPrime;
	for(int n=2;n<100;n++)
	{
		isPrime=isPrimeNumber(n);
		if(isPrime==1)
		{
			cout<<n<<" ";
		}
	}
	return 0;
}
