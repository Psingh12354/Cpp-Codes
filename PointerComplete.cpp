// Pointer is a variable which store the address of other varibale
#include<iostream>
using namespace std;
int main()
{
	int age=20;
	bool marks=75;
	int *ageptr;
	bool * marksptr;
	ageptr=&age;
	marksptr=&marks;
	cout<<age<<"-->"<<ageptr<<endl;
	cout<<marks<<"-->"<<marksptr<<endl;
	cout<<age<<"-->"<<*ageptr<<endl;
	cout<<marks<<"-->"<<*marksptr<<endl;
	return 0;
}
