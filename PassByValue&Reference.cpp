// pass by value and reference
#include<iostream>
using namespace std;
void passByValue(int a)
{
	a=200;
}
void passByReference(int *a) // here we use pointer to pass a value by it reference
{
	*a=200;
}
int main()
{
	int a=20;
	int b=20;
	passByValue(a);
	cout<<a<<endl;
	passByReference(&b);
	cout<<b<<endl;
	return 0;
}
