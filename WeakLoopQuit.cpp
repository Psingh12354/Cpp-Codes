#include<iostream>
using namespace std;
int main()
{
	int n;
	char again;
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	do
	{	
		switch (n)
		{
			
		case 1:
			cout<<"Monday";
			break;
 		case 2:
    		cout << "Tuesday";
    		break;
 			 case 3:
	    	cout << "Wednesday";
	   	    break;
	  	case 4:
	    	cout << "Thursday";
	    	break;
	  	case 5:
	   		 cout << "Friday";
	    	break;
	  	case 6:
	    	cout << "Saturday";
	   		break;
	    case 7:
	    	cout << "Sunday";
	    	break;
		default:
			cout<<"Wrong input"<<endl;
		}
		cout<<"\n Press q or Q to quit : ";
		cin>>again;	
		
	}	while (again=='q' || again=='Q');
	system("pause");
	return 0;
	
}
