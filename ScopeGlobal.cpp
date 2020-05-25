//Here i am going to tell about Variable scope and unary scope
// Alwayws local value  is prefer
// :: unary scope resolution operator
#include<iostream>
using namespace std;
int x=30; // here i declare a global variable
int main()
{
//	int x=20;  // Here it is a local variable
cout<<::x<<endl; // Here it will print the value of GLobal variable with the help of unary operator  
}
