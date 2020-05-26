#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact=1;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	cout<<"Factorial of "<<n<<" is "<<fact<<endl;
	return 0;
}
