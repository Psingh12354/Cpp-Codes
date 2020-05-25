// Here i use for loop to print the multiplication of give number upto n time by incrementing it by one
#include<iostream>
using namespace std;
int main()
{
	int a;
	int n;
	int multiply;
	cout<<"Enter the value to be multiplied : "<<endl;
	cin>>a;
	cout<<"Enter the number till how much you required:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		multiply=a*i;
		cout<<"Multiply of number is : "<<multiply<<endl;
	}
	return 0;
}
