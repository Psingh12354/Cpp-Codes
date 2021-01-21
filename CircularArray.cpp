#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int cal(char a,char b)
{
	int i=a;
	int j=b;
	int clock=abs(b-a);
	int anti=abs(26-clock);
	return min(clock,anti);
}
int main()
{
	string s;
	int count=0;
	char current='A';
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		count+=cal(current,s[i]);	
		current=s[i];
	}
	cout<<count;
}
