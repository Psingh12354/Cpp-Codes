// Here I am going to wap that implement function with argument
// Simple sum operation is going to perform here
#include<iostream>
using  namespace std;
void sum(int num1,int num2)
{
	cout<<"Sum of number is : "<<num1+num2<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the value of a and b : "<<endl;
	cin>>a;
	cin>>b;
	sum(a,b);
	return 0;
}
