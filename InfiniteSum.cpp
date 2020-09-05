#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"Enter the number to add : \n";
	cin>>a>>b;
	while(true)
	{
		sum=a+b;
		cout<<"\nSum : "<<sum;
		a+=1000000;
		b+=1000000;
	}
	return 0;
}
