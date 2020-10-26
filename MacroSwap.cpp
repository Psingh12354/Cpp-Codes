#include<iostream>
using namespace std;
#define SWAP(a,b){int temp; temp=a; a=b; b=temp;}
int main()
{
	int x,y;
	cout<<"Enter the element x and y : ";
	cin>>x>>y;
	cout<<"x = "<<x<<" and y = "<<y;
	SWAP(x,y);
	cout<<"\nx = "<<x<<" and y = "<<y;
	return 0;
}
