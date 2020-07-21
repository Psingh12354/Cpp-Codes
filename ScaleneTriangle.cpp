#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
	float side1, side2, ang1, area;
	char n;
	{
		cout<<"Enter the value of side 1 : "<<endl;
		cin>>side1;
		cout<<"Enter the value of side 2 : "<<endl;
		cin>>side2;
		cout<<"Enter the value of ang 1 : "<<endl;
		cin>>ang1;
		area=(side1 * side2 *sin((PI/180)*ang1))/2;
		cout<<"Area of Scalene triangle is : "<<area<<endl;
		cout<<"Press q for quit : ";
		cin>>n;
	}
	return 0;
}
