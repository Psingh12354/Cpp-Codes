#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int count=0;
	cout<<"Enter the element to find most repeated word "<<endl;
	cin>>a;
	{
		for(int i=0;i<=a.length();i++)
			{
			count+=1;
			}
		cout<<"Maximum repeatation ="<<count<<endl;
	}
return 0;
}
	
