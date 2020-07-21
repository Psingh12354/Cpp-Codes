#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
	float radius,area,circum;
		cout << "\n\n Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
        cin>>radius;
        circum=2 * PI * radius;
        area=PI * pow(radius,2);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;		
        return 0;
		
}
