#include<iostream>
using namespace std;
void display(int *ptr);
int main()
{	int age=25;
	display(&age);
	cout<<age<<endl; //
	return 0;
}
void display(int *ptr)
{
	cout<<*ptr<<endl;
	*ptr=100; //
	
}
