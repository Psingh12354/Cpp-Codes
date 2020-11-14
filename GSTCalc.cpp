#include<iostream>
using namespace std;
int main()
{
	int n,OC,GST;
	while(true)
	{
		float NP=0,GSTA=0;
		cout<<"\n\t\t\t\t****GST CALC****\t\t\t\t\n";
		cout<<"Press the buttons \n";
		cout<<"1.ADD\n";
		cout<<"2.SUBTRACT\n";
		cout<<"3.Exit\n";
		cout<<"Enter number : ";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter original cost : ";
				cin>>OC;
				cout<<"Enter GST : ";
				cin>>GST;
				GSTA=(OC*GST)/100;
				NP=OC+GSTA;
				cout<<"GST Amount is "<<GSTA<<endl;
				cout<<"Net Price is "<<NP<<endl;
				break;
			case 2: 
				cout<<"Enter original cost : ";
				cin>>OC;
				cout<<"Enter GST : ";
				cin>>GST;	
				GSTA=OC-(OC*100/(100+GST));
				NP=OC-GSTA;
				cout<<"GST Amount is "<<GSTA<<endl;
				cout<<"Net Price is "<<NP<<endl;
				break;
			case 3: 
				exit(0);
			default:
				cout<<"Invalid input!";
		}
	}
	return 0;
}
