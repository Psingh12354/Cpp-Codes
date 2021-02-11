#include<iostream>
using namespace std;
int main()
{
	int n=124;
	int r=n;
	int count=0;
	while(n!=0){
		int d=r%10;
		r/=10;
		if(d>0 && n%d==0){
			count+=1;
		}
	}
	cout<<"Count : "<<count;
}
