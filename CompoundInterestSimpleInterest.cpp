#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,r,t,n,si,ci;
	int x;
	cout<<"***** 1 for simple and 2 for compound ***** "<<endl;
	cin>>x;
	cout<<"Enter the principal: "<<endl;
	cin>>p;
	cout<<"Enter the rate: "<<endl;
	cin>>r;
	cout<<"Enter the time: "<<endl;
	cin>>t;
	switch(x)
		{
		case 1:
			si=(p*r*t)/100;
			cout<<si<<" is the simple interest"<<endl;
			break;
		case 2:
				cout<<"Enter the growth"<<endl;
				cin>>n;
			ci=p*pow((1+(r/100)),n);
			cout<<ci<<" is the compound interest annually"<<endl;
			break;
		default:
			cout<<"Enter input is wrong!"<<endl;
			break;
		}	
	return 0;
}
