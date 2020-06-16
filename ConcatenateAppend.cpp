#include<iostream>
#include<string>
using namespace std;
int main()
{
	string fname,lname,fullname;
	cout<<"Enter your first name :"<<endl;
	cin>>fname;
	cout<<"Enter your last name :"<<endl;
	cin>>lname;
	fullname=fname.append( lname);
	cout<<"Your full name is : "<<fullname<<endl;
	return 0;
}
