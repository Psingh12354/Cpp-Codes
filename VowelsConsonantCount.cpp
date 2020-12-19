#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]={"My name is Priyanshu Singh"};
	int vowels = 0;
	int consonant=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
		{
			++vowels;
		}
		else
		{
			++consonant;
		}
	}
	cout<<"Number of vowels : "<<vowels;
	cout<<"\nNumber of consonants : "<<consonant;
}
