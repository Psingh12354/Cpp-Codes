#include<iostream>
using namespace std;
bool check(int);
bool check(int age){
	if(age>=18)
		return true;
	else
		return false;
}
int main()
{	
	if(check(18))
		cout<<"You are able to give vote"<<endl;
	else
		cout<<"You are not eligible"<<endl;
	return 0;
}
