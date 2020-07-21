#include<iostream>
using namespace std;
int main()
{
	int a;
	int sum=0;
	cout<<"Enter the number : "<<endl;
	for(int i=0;i<=10;i++)
	{	
		cin>>a;
		sum+=a;
	}
	cout<<"Sum = "<<sum<<endl;
	return 0;
}
