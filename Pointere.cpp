// Pointer is a variable which store the address of other variable
#include<iostream>
using namespace std;
int main()
{
	int a=20;
	cout<<&a<<endl; // Here we use & to know the address of variable where it store in memory
	int *p;
	p=&a;
	cout<<p<<endl; // Here i explain how pointer work
	cout<<*p<<endl; // To get the value 
	return 0;
}
