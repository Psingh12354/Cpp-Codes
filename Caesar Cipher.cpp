#include<iostream>
#include<string.h>
using namespace std;
int main() {
 char con='y';
 char msg[100];
 int i, j, length,choice,key;
 do{
 	cout<<"Enter the message:\n";
 	cin>>msg;
 	cout << "Enter key: ";
	 cin >> key;
	 length = strlen(msg);
	 cout<<"Enter your choice \n1. Encryption \n2. Decryption \n";
	 cin>>choice;
	 if (choice==1) 
 	{
	 char ch;
	 for(int i = 0; msg[i] != '\0'; ++i) {
	 ch = msg[i];
	 if (ch >= 'a' && ch <= 'z'){
	 ch = ch + key;
	 if (ch > 'z'|| ch<'a') {
	 ch = ch - 'z' + 'a' - 1;
	 }
	 msg[i] = ch;
	 }
	 else if (ch >= 'A' && ch <= 'Z'){
	 ch = ch + key;
	 if (ch > 'Z'|| ch<'A'){
	 ch = ch - 'Z' + 'A' - 1;
	 }
	 msg[i] = ch;
	 }
	 }
	 cout<<"Encrypted message: "<< msg;
	 }
	 else if (choice == 2) { 
	 char ch;
	 for(int i = 0; msg[i] != '\0'; ++i) {
	 ch = msg[i];
	 if(ch >= 'a' && ch <= 'z') {
	 ch = ch - key;
	 if(ch < 'a'||ch>'b'){
	 ch = ch + 'z' - 'a' + 1;
	 }
	 msg[i] = ch;
	 }
	 else if(ch >= 'A' && ch <= 'Z') {
	 ch = ch - key;
	 if(ch < 'A'||ch>'Z') {
	 ch = ch + 'Z' - 'A' + 1;
	 }
	 msg[i] = ch;
	 }
	 }
	 cout << "Decrypted message: " << msg;
	 }
	 else
	 {
	 	cout<<"Enter valid choice.";
	 }
	 
	 cout<<"\nDo you wanna continue: if yes press Y or y otherwise any character:";
	 cin>>con;
	}
	while(con=='y'|| con=='Y');
}
