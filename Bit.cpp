#include<iostream>
using namespace std;
int bit(int a){
	int count=0;
	while(a){
		count+=1;
		a>>=1;	
	}
	return count;
}
int main()
{
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	cout<<bit(a);
}
