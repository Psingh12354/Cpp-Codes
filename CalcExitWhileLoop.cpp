#include<iostream>
using namespace std;
int main()
{
	int a,b,mul,sum,div,sub;
	int choice;

	while(true)
	{
	cout<<"Enter your choice : \n 1> Add \n 2> Subtract \n 3> Multiply \n 4> Divide\n 5> Quit!\n";
	cin>>choice;
	cout<<"Enter the value of a and b :\n";
	cin>>a>>b;
	switch(choice)
	{
		case 1:
			cout<<"Sum : "<<a+b<<endl;
			break;
		case 2:
			cout<<"Subtract : "<<a-b<<endl;
			break;
		case 3:
			cout<<"Multiply : "<<a*b<<endl;
			break;
		case 4: 
			cout<<"Divide : "<<a/b<<endl;
			break;
		case 5:
			exit(0);		
	}
	}
	cout<<"You are out of loop!\n";
	return 0;
}
