#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string :"<<endl;
	getline(cin,str);
	cout<<"Orignal text : "<<str;
	for(int j=0;j<(int)str.size();j++)
	{
		string key=str.substr(j,3),repl;
		if(key=="dog" || key=="Dog"){
			repl="cat";
			for(int k=0;k<3;k++)
			{
				str[j+k]=repl[k];
			}
		}
	}
	cout<<"\n New Text : "<<str<<endl;
	return 0;
}
