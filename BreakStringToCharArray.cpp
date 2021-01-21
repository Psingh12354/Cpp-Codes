#include<iostream>
using namespace std;
int main()
{
	string s="Priyanshu Singh";
	int n=s.length();
	char char_array[n];
	int count=0;
	for(int i=0;i<sizeof(char_array);i++)
	{
		if(s[i]==' ')
		{
			s="\0";
			count+=1;
		}
		char_array[i]=s[i];
		cout<<char_array[i];
	}
}
