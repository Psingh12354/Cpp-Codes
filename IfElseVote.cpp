//Here i am writting this code to check if the person is able to vote or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	char id;
	cout<<"Please enter your correct age :"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"Able to vote"<<endl;
	}
	else
	{
		cout<<"Not able to vote"<<endl;
	}
	return 0;
}
