#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Program to check input string is vowel or consonant :"<<endl;
	cin>>str;
	if(str=="a"||str=="e"||str=="i"||str=="o"||str=="u"||str=="A"||str=="E"||str=="I"||str=="O"||str=="U")
	{
		cout<<"String is vowels "<<endl;
	}
	else
	{
		cout<<"String is consonats "<<endl;
	}
	return 0;
}
