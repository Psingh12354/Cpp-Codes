/* Here we use normal input method in this we can't give spaces between two input if we try then
 it move to next line of code*/
// for better knowlege see InputString2.cpp 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string : "<<endl;
	cin>>str;
	cout << "Hello, " << str 
    << " welcome to GfG !\n"; 
    return 0;
}
