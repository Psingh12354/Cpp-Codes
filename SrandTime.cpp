#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int random,guess;
	random=rand()%10+1;
	do
	{
	cout<<"Guess the number between 1 to 10 : \n";
	cin>>guess;
	if(random<guess)
	{
		cout<<"\nSelected number is less\n";
	}
	else
	{
		cout<<"\nSelected number is greater\n";
	}
	}while(random!=guess);
	cout<<"\nCorrect No. Congrats!";
	return 0;
}
