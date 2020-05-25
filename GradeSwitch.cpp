//Here i have done  a simple program on grade 
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char grade;
	cout<<"Enter the grade :"<<endl;
	cin>>grade;
	switch(grade)
		{	
			case 'A':
				cout<<"Excellent"<<endl;
				break;
			case 'B':
				cout<<"Good"<<endl;
				break;
			case 'C':
				cout<<"Need improvement"<<endl;
				break;
			default:
				cout<<"Fail or Invalid"<<endl;
				break;
		}
return 0;
}
