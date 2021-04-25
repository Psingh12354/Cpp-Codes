#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="Hello";
	int n=str.length();
	int len=n*(n+1)/2;
	cout<<len;
}
