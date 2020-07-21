#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float s1;
	float area;
		cout << "\n\n Calculate the area of the Equilateral Triangle :\n";
		cout << " ----------------------------------------------------\n"; 

		cout<<" Input the value of the side of the equilateral triangle: ";
		cin>>s1;
		area=sqrt(3)/4*(s1*s1);
		cout<<"Area of Equilateral Triangle is : "<<area<<"\n";
		return 0;
}
