#include<iostream>
using namespace std;
int main()
{
	char line[500];
	int vowels=0,consonants=0,spaces=0,digit=0;
	cout<<"Enter the line of string :"<<endl;
	cin.getline(line,500);
	for(int i=0;line[i]!='\0';++i)
	{
		if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' ||line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
		{
			vowels++;
		}
		else
		if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
		{
			consonants++;
		}
		else
		if(line[i]>='0' && line[i]<='9')
		{
			digit++;
		}
		else
		if(line[i]=' ')
		{
			spaces++;
		}
 
	}
	cout<<"Vowels = "<<vowels<<endl;
	cout<<"Consonants = "<<consonants<<endl;
	cout<<"Digit = "<<digit<<endl;
	cout<<"Spaces = "<<spaces<<endl;
	return 0;
}
