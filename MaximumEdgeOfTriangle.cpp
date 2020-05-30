#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three side of a triangle to find maximum edge in it : "<<endl;
	cin>>a>>b>>c;
	if(a+b>a+c || a+b>b+c)
	{
		cout<<"(side1 + side2) - 1 = "<<a+b-1<<endl;
	}
	if(a+c>a+b ||a+c>b+c)
	{
		cout<<"(side1 + side2) - 1 = "<<a+c-1<<endl;
	}
	if(b+c>a+c || b+c>a+b)
	{
		cout<<"(side1 + side2) - 1 = "<<b+c-1<<endl;
	}
	{
		if(a+b-1>a+c-1 && a+b-1>b+c-1)
		{
			cout<<a+b-1<<" is largest"<<endl;
		}
		else
		if(a+c-1>a+b-1 && a+c-1>b+c-1)
		{
			cout<<a+c-1<<" is largest"<<endl;
		}
		else
		{
			cout<<b+c-1<<" is largest"<<endl;
		}
		
return 0;
}
}
