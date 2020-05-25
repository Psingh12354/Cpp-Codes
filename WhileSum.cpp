// Here i have done a program that can sum the number upto 100 time by using while loop
#include<iostream>
using namespace std;
int main()
{
	int x=1;
	int sum=0;
	int n;
	cout<<"Input any number : "<<endl;
	cin>>n;
	while(x<=100)
	{
		sum=sum+n;
		x++;
	}
	cout<<"Sum of number is :"<<sum<<endl;
	return 0;
}
