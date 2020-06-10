#include<iostream>
using namespace std;
struct student{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	student s;
	cout<<"Enter information"<<endl;
	cout<<"Enter student name : ";
	cin>>s.name;
	cout<<"Enter roll : "<<endl;
	cin>>s.roll;
	cout<<"Enter marks : "<<endl;
	cin>>s.marks;
	cout<<"Name of student is "<<s.name<<endl;
	cout<<"Roll number of student is "<<s.roll<<endl;
	cout<<"Marks of student is "<<s.marks<<endl;
	return 0;
}
