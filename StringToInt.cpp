#include<iostream>
#include<sstream>
#include<typeinfo>
#include <list> 
#include <iterator> 
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	stringstream ss;
	ss<<n;
	string s;
	ss>>s;
	cout<<"String representation is : "<<s<<"\n";
	cout<<typeid(s).name(); 
	return 0;	
}
