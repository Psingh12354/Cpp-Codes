#include<iostream>
using namespace std;
int main()
{
	int first,second,*a,*b,sum;
	cout<<"Enter two integer number : \n";
	cin>>first>>second;
	a=&first;
	b=&second;
	sum=*a+*b;
	cout<<"Sum : "<<sum<<endl;
	return 0;
}
