#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[20];
	cout<<"Enter a string : ";
	gets(s); //to store and take input in an array
	strrev(s);
	cout<<"Reverse string is : "<<s;
}
