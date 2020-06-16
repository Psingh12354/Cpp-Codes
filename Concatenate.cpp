#include<iostream>
#include<string>
using namespace std;
int main()
{
	string fname,lname;
	string fullname;
	cout<<"Enter your first name :"<<endl;
	cin>>fname;
	cout<<"Enter your last name :"<<endl;
	cin>>lname;
	fullname=fname+ " " +lname;
	cout<<"Your full name is : "<<fullname;
	return 0;
}

