#include<iostream>
using namespace std;
int main()
{
	float centimeter,meter,kilometer;
	int n;
	cout<<"-----Program to convert centimeter to meter and kilometer--------"<<endl;
	cout<<"Enter the value in centimeter : "<<endl; 
	cin>>centimeter;
	cout<<"--- Press 1 for centimeter to meter ----"<<endl;
	cout<<"--- Press 2 for centimeter to kilometer ----"<<endl;
	cin>>n;
	switch (n)
	{	
		case 1:
			meter=centimeter/100;
			cout<<centimeter<<" is = "<<meter<<" meter"<<endl;
			break;
		case 2:
			kilometer=centimeter/100000;
			cout<<centimeter<<" is = "<<kilometer<<" kilometer"<<endl;
			break;
		default:
			cout<<"Wrong input!"<<endl;
			break;
	}
	return 0;
}
