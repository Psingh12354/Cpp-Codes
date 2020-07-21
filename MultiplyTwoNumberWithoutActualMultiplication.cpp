#include<iostream>
using namespace std;
int multi(int x,int y)
{
	if(y==0)
	return 0;
	if(y>0)
	return (x+multi(x,y-1));
	if(y<0)
	return -multi(x,-y);
}
int main()
{
	cout<<"Multiply of two nums are "<<multi(8,9)<<endl;
	cout<<"Multiply of two nums are "<<multi(-15,56)<<endl;
	
}
