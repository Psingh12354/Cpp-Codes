#include<iostream>
using namespace std;
int main()
{
	string str="chandigarh";
	int pos;
	int x='a';
	int y='z';
	for(int i=0;i<str.size();i++){
		if((int)str[i]%2==0){
			cout<<str[i]<<" ";	
		}
	}
}
