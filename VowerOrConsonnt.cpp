#include<iostream>
using namespace std;
int main()
{	
	char i;
	int islowervowel,isuppervowel;
	cout<<"Enter an alphabet to check wheather vowel or consonant : "<<endl;
	cin>>i;
	islowervowel=(i=='a'||i=='e'||i=='i'||i=='o'||i=='u');
	isuppervowel=(i=='A'||i=='E'||i=='I'||i=='O'||i=='U');
	if (islowervowel||isuppervowel)
	{
		cout<<"alphabet is vowel"<<endl;
	}
	else
	{
		cout<<"Not a vowel consonant"<<endl;
	}
	return 0;
}
