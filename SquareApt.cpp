#include<iostream>
#include<cmath>
using namespace std;
int square(int x,int exp)
{
	return pow(x,exp);
	
}
int main()
{
	int base,exponent;
	cout<<"Enter the base :: ";
	cin>>base;
	cout<<"Enter the exponent :: ";
	cin>>exponent;
	cout<<square(base,exponent);
}
