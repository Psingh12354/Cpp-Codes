// Exception is situation a type of error like divide by 0 etc
// to handle we use try throw and catch
#include<iostream>
#include<exception>
using namespace std;
int main()
{
	try
	{
		cout<<"Enter your age : "<<endl;
		int age=0;
		cin>>age;
		if(age>100 || age<0)
		{
			throw 'age not possible'; // if you don't know about exception than don't use it
		}
	}
	catch(int e)
	{
		cout<<"Some Exceptions :"<<e<<endl;
	}
	// for default exception we use
	//catch(std::exception e)
	//{
	//	cout<<"default exception is : "<<e.what()<<endl;
	//}
	// you can use diffrent type of catch for diffrent type of exception
	//catch(...){} use it in last
}
