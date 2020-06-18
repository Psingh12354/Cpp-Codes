#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	double avg;
	char again;
	do
	{
		cout<<"\n Enter the score of three : ";
		cin>>s1>>s2>>s3;
		avg=(s1+s2+s3)/3.0;
		cout<<"The average is "<<avg<<endl;
		cout<<"Do you want another average set? (Y/N) : ";
		cin>>again;
	}while (again=='y' || again=='Y');
	system("pause");
	return 0;
}
