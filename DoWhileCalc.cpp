// Do while loop it work atleast one when condition is not even true
#include<iostream>
using namespace std;
int main()
{
	float num1, num2;
	char op;
	cout<<"Enter the operator : "<<endl;
	cin>>op;
	cout<<"Enter the First number :"<<endl;
	cin>>num1;
	cout<<"Enter the Second number : "<<endl;
	cin>>num2;
	do
	{
	switch(op)
	{
		case '+':
			cout<<"Sum of two numbers is = "<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Subtraction of two numbers is = "<<num1-num2<<endl;
			break;
		case '*':
			cout<<"Multiplication of two numbers is = "<<num1*num2<<endl;
			break;
		case '/':
			cout<<"Division of two numbers is = "<<num1/num2<<endl;
			break;
		default:
			cout<<"Enter! operator is not correct"<<endl;
			
	}
}
	return 0;
	
	
}
