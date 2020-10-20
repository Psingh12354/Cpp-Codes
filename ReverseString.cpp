#include<iostream>
//#include<string.h>
using namespace std;
int main()
{
	char *str="ForgetCode";
	for(int i=(sizeof(str)-1);i>=0;i--)
	{
		cout<<str[i];
	}
}
