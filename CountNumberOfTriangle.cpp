#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum;
	cout<<"Enter the number : \n";
	cin>>n;
	if(n%2==0)
	{
		sum=(0.125)*(n*(n+2)*(2*n+1));
	}
	else
	{
		sum=(0.125)*(n*(n+2)*(2*n+1)-1);
	}
	cout<<"Sum is : "<<sum;
	return 0;
}
