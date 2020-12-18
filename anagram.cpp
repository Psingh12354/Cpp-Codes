#include<bits/stdc++.h> 
using namespace std;
int Anagram(string str,string str1)
{
	int n=str.length();
	int n1=str1.length();
	if(n!=n1)
	{
		return 0;
	}
	sort(str.begin(),str.end());
	sort(str1.begin(),str1.end());
	for(int i=0;i<n;i++)
	{
		if(str[i]!=str1[i])
			return 0;
	}
	return 1;
}
int main()
{
	string str="Hello";
	string str1="Helol";
	if(Anagram(str,str1))
	{
		cout<<"It is an anagram!";
	}
	else
	{
		cout<<"Not an anagram";
	}
}
