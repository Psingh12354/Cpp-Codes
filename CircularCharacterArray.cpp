#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int calc(char a,char b){
	int i=a;  //convert char to integer
	int j=b;
	int clock=abs(b-a);
	int anti=abs(26-clock);
	return min(clock,anti);
}
int main(){
	string s;
	char current='A';
	int count=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		count+=calc(current,s[i]);
		current=s[i];
	}
	cout<<count;
	return 0;
}
