#include<iostream>
using namespace std;
int main(){
	int sum3=0,sum5=0,sum15=0;
	int x=12;
	int n3=x/3;
	sum3=(n3/2)*(2*(3)+(n3-1)*3);
	int n5=x/5;
	sum5=(n5/2)*(2*(5)+(n5-1)*5);
	int n15=x/15;
	sum15=(n15/2)*(2*(15)+(n15-1)*15);
	cout<<sum3+sum5-sum15;
	
}
