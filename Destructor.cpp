// Destructor are use to destroy the object
#include<iostream>
using namespace std;
class Book
{	public:
	int a,b;
	Book()
	{
		cout<<"Constructor"<<endl;
		cout<<"Enter the number for sum : "<<endl;
		cin>>a>>b;
		cout<<a+b<<endl;
	}
		~Book() // here we use tild symbole to show destructor
	{
		cout<<"We are in Destructor"<<endl;
	}
	
};
int main()
{
	Book ob;
	return 0;
}
