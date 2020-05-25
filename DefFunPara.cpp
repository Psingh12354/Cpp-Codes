//Here i have done a simple program on Default Fuinction in c++
#include<iostream>
using namespace std;
int sum(int a=10,int b=32)
{
	int result=0;
	result=a+b;
	return result;
}
int main()
{
	cout<<sum(); // Here we give no argument called default argument
	return 0;
}

