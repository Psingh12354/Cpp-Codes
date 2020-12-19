#include<iostream>
using namespace std;
int main()
{
	int n,r,x,s;
	cout<<"Armstrong Number are\n";
	for(int i=1;i<=1000000;i++)
	{
		s=0;
		x=i;
		while(x!=0)
		{
			r=x%10;
			s+=r*r*r;
			x=x/10;
		}
		if(s==i)
		{
			cout<<i<<"\n";
		}
	}
}
