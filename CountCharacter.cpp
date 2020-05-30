#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int i;
	char checkCharacter;
	int count=0;
	cout<<"Enter the charater :"<<endl;
	cin>>a;
	cout<<"Enter the word to count :"<<endl;
	cin>>checkCharacter;
	for(i=1;i<=a.size();i++)
	{
		if(a[i]==checkCharacter)
		{
			count+=1;
		}
	}
	 cout << "Number of " << checkCharacter << " = " << count;
	return 0;	
}
