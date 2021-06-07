#include<iostream>
using namespace std;
int add(int,int,int=0);
int main(){
	int a,b;
	cout<<"Enter a and b : \n";
	cin>>a>>b;
	cout<<"Sum is : "<<add(a,b);
	int c;
	cout<<"\nEnter a,b and c : \n";
	cin>>a>>b>>c;
	cout<<"Sum is : "<<add(a,b,c);
	return 0;
}
int add(int x,int y,int z){
	return (x+y+z);
}
