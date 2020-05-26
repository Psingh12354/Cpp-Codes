#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	float d,r,i,x1,x2;
	cout<<"Enter the value of a,b,c : "<<endl;
	cin>>a>>b>>c;
	if (a==0)
	{
		cout<<"This is not a quadratic equation : "<<endl;
	}
	else
	{
		d=b*b-4*a*c;
		{
			if(d>0)
			{
				x1=(-b+sqrt(d))/(2*a);
				x1=(-b-sqrt(d))/(2*a);
				cout<<"Root are real and diffrent"<<endl;
				cout<<"Root of 1 : "<<x1<<endl;
				cout<<"Root of 2 : "<<x2<<endl;
			}
			else 
			if(d==0)
			{
				cout<<"Root are real and same :"<<endl;
				x1=(-b+sqrt(d))/(2*a);
				cout<<"Root1 = Root2 = "<<x1<<endl;
			}
			else{
				r=-b/(2*a);
				i=sqrt(-d)/(2*a);
				cout<<"Root are complex and diffrent."<<endl;
				cout<<"Root1"<<r<<endl;
				cout<<"Root2"<<i<<endl;
			}
		}
		return 0;
	}
}
