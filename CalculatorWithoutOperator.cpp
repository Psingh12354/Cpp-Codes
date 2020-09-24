#include<iostream>
using namespace std;
int multiply(int x,int y)
{
	if(y==0)
	return 0;
	if(y>0)
	return x+multiply(x,y-1);
	if(y<0)
	return -multiply(x,-y);
}
int add(int x,int y)
{
	return printf("%*c %*c",x,"",y,"");
}
int subtract(int x,int y)
{
	if(y==0)
	return x;
	return subtract(x^y,(~x&y)<<1); //use xor for better knowlege check AddWithoutOperatorWithXor.cpp file
}
int division(int x,int y)
{
	return printf("%*c %*c",x,"",y,"");
}
int main()
{
	int a,b,c=0;
	cout<<"Enter the value of a and b : \n";
	cin>>a>>b;
	cout<<"Multiply : "<<multiply(a,b)<<"\n";
	cout<<"Add : "<<add(a,b)<<"\n";
	cout<<"Subtract : "<<subtract(a,b)<<"\n";
	int div=division(a,c)/b;
	cout<<"Division : "<<div<<"\n"; //need to fix addition
	return 0;
}
