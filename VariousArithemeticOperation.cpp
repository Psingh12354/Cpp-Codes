#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=5,b=6;
	double d1=5.6,d2=6.1;
	cout<<"Program to show multiple operation in one : "<<endl;
	cout<<fixed<<setprecision(1);
	cout<<a<< " + "<<b<<" = "<<a+b<<endl;
	cout<<d1<< " + "<<d2<<" = "<<d1+d2<<endl;
	cout<<a<< " + "<<d2<<" = "<<a+d2<<endl;
	cout<<d1<< " + "<<b<<" = "<<d1+b<<endl;
	
	cout<<a<< " - "<<b<<" = "<<a-b<<endl;
	cout<<d1<< " - "<<d2<<" = "<<d1-d2<<endl;
	cout<<a<< " - "<<d2<<" = "<<a-d2<<endl;
	cout<<d1<< " - "<<b<<" = "<<d1-b<<endl;
	
	cout<<a<< " * "<<b<<" = "<<a*b<<endl;
	cout<<d1<< " * "<<d2<<" = "<<d1*d2<<endl;
	cout<<a<< " * "<<d2<<" = "<<a*d2<<endl;
	cout<<d1<< " * "<<b<<" = "<<d1*b<<endl;
	
	cout<<a<< " / "<<b<<" = "<<a/b<<endl;
	cout<<d1<< " / "<<d2<<" = "<<d1/d2<<endl;
	cout<<a<< " / "<<d2<<" = "<<a/d2<<endl;
	cout<<d1<< " / "<<b<<" = "<<d1/b<<endl;
	return 0;
}
