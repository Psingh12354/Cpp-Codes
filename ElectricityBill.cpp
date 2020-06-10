#include<iostream>
using namespace std;
int main()
{
	int units;
	cout<<"Enter the number of units use : "<<endl;
	cin>>units;
        if (units <= 100) { 
            cout<<"Bill = "<<units * 10<<endl; 
        } 
        else if (units <= 200) { 
            cout<<"Bill = "<<(100 * 10) + (units - 100) * 15<<endl; 
        } 
        else if (units <= 300) { 
             cout<<"Bill = "<<(100 * 10) + (100 * 15) + (units - 200) * 20<<endl; 
        } 
        else if (units > 300) { 
            cout<<"Bill = "<<(100 * 10) + (100 * 15) + (100 * 20) + (units - 300) * 25<<endl; 
        } 
        return 0; 
}
