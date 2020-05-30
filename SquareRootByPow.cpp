#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int base,exponent,result;
	cout<<"Enter the base number : "<<endl;
	cin>>base;
	cout<<"Enter the exponent number : "<<endl;
	cin>>exponent;
	result=pow(base,exponent);
	cout<<base<<"^"<<exponent<<" = "<<result<<endl;
	return 0;
}
