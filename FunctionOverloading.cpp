// Function Overloading 
// In this when a function call itself multiple time is called function overloading
#include<iostream>
using namespace std;
void sum(int num1,int num2)
{
	cout<<"sum = "<<num1+num2<<endl;
}
void sum(float num1,float num2) // second sum for function overloading
{
	cout<<"sum = "<<num1+num2<<endl;
}
int main()
{
	float a=34.54,b=54.65;
	sum(a,b); // here this sum for float value
	int x=45,y=43;
	sum(x,y); // here this sum for int value
}

