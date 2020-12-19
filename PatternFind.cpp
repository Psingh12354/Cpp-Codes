#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]={"My name is Priyanshu Singh"};
	char n;
	cout<<"Enter the character : ";
	cin>>n;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==n)
		{
			cout<<"Pattern found at index : "<<i<<"\n";
		}
	}
}
