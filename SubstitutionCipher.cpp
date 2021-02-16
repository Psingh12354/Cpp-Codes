#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char msg[100];
	string str1="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@!#$%^&()_=+-/*,.;:|\}[]{}";
	string str2="zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA0153697824@#$%^&()_=!/*-+.;,:[]{}\|";
	int i,j,lenght,choice,key;
	cout<<"Enter message: \n";
	cin.getline(msg,100);
	remove(msg,msg+100, ' ');
	cout<<"Enter your choice \n1. Encryption \n2. Decryption\n";
	cin>>choice;
	if(choice==1){
		char ch;
		for(int i=0;msg[i]!='\0';i++){
			ch=msg[i];
			int j=str1.find(ch);
			msg[i]=str2.at(j);
		}
		cout<<"Encrypted message is : "<<msg;
	}
	else if(choice==2){
		char ch;
		for(int i=0;msg[i]!='\0';i++){
			ch=msg[i];
			int j=str2.find(ch);
			msg[i]=str1.at(j);
		}
		cout<<"Decrypted message is : "<<msg;
	}
	else{
		cout<<"Enter valid choice.";
	}
}
