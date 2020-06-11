#include<iostream>
#include<string>
using namespace std;
void Reverse_string(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i];  
} 
int main(void) 
{ 
    string s;
	cout<<"Enter the string :";
	cin>>s; 
    Reverse_string(s); 
    return (0); 
} 

