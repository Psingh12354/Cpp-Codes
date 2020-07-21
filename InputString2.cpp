// Here we use getline to take spaces between input instead of normal cin input method 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string : "<<endl;
	getline(cin,str);
	cout << "Hello, " << str 
    << " welcome to GfG !\n";   
    return 0; 
}
