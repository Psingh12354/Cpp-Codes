#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\nEnter year: ";
	cin>>year;
	((year%100!=0 && year%4==0) || (year%400==0))?cout<<year<<" is leap year. "<<endl : cout<<year<<" is not a leap year."<<endl;
	return 0;

}
