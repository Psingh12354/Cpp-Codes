#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Random number are :"<<rand()<<endl;

	if(i%2==0)
	{
		cout<<"You got an even number congrats"<<endl;
	}
	else
	{
		cout<<"You got a odd number"<<endl;
	}
	
	}
	return 0;
}
