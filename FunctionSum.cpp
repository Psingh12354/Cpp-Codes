// Here i am going to type how to use function in c++
// We perform simple addition 
#include<iostream>
using namespace std;
void FunctionSum() // Here we void so that it will not return any argument and FunctionSum() as function name
{
	int a,b;
	int sum;
	cout<<"Enter the value of a and b : "<<endl;
	cin>>a>>b;
	sum=a+b;
	cout<<"Sum of number is :"<<sum<<endl;
}
int main()
{
	FunctionSum(); //Here we call function by it's name
	return 0;
}
