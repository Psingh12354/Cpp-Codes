#include<iostream>
#include <algorithm> 
#include<string>
using namespace std;
int main()
{
	string str="Hello";
	reverse(str.begin(),str.end());
	cout<<str;
}
