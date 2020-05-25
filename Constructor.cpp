// Constructor is a special member function in class it automatically get created when object is created it has same name as class
#include<iostream>
using namespace std;
class Book
{	public:
	int a,b;
	Book()
	{
		cout<<"Enter the number : "<<endl;
		cin>>a>>b;
		cout<<"Sum of number is = "<<a+b<<endl;
	}
};
int main()
{
	Book ob;
	return 0;
}
