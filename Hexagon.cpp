#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	int ar,s;
	cout<<"Area of Hexagon : "<<endl;
	cin>>s;
	ar= (6*(s*s))/(4*tan(M_PI/6));
	cout<<"Area = "<<ar<<endl;
	return 0;
}
