#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[]="Hello";
	int n=strlen(str);
	cout<<n;
	char temp;
	for(int i=0;i<n/2;i++)
	{
		temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	cout<<str;
}
