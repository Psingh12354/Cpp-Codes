#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,c=5;
	int variable;
	cout<<"Program to check which number is bigger : "<<endl;
	variable=(a>b)?(a>c?a:c):(b>c?b:c);
	cout<<"Largest number is : "<<variable<<endl;
	return 0;
}
