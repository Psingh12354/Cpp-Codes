#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the numbers : "<<endl;
	cin>>n;
	int reversed=0;
	int remainder;
	while(n!=0)
		{
			remainder=n%10;
			reversed=reversed*10+remainder;
			n/=10;
		}
	cout<<"Reversed Number : "<<reversed<<endl;
	return 0;
}
