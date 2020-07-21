#include<iostream>
using namespace std;
int main()
{
	int selection;
	float a,b,c;
	do
	{
		cout<<"Please make a selection: \n";
		cout<<"1) Addition \n";
		cout<<"2) Subtraction \n";
		cout<<"3) Multiplication \n";
		cout<<"4) Division \n";
		cin>>selection;
	}
	while(selection != 1 && selection != 2 &&
        selection != 3 && selection != 4);
        cout<<"Your selected option # "<<selection<<endl;
        cout<<"Enter the value of a : \n";
        cin>>a;
        cout<<"Enter the value of b : \n";
        cin>>b;
        switch(selection)
        {
        	case 1:
        		c=a+b;
        		cout<<"Addition = "<<c<<endl;
        		break;
        	case 2:
        		c=a-b;
        		cout<<"Subtraction = "<<c<<endl;
        		break;
        	case 3:
        		c=a*b;
        		cout<<"Multiplication = "<<c<<endl;
        		break;
        	case 4:
        		c=a/b;
        		cout<<"Division = "<<c<<endl;
        		break;
        	default:
        		cout<<"Invalid input!"<<endl;
        		break;
		}
        return 0;
}
