/*dividend=divisor×quotient+remainder*/
#include<iostream>
using namespace std;
int main()
{
	int dd,dr,qt,rr;
	cout<<"Enter dividend : ";
	cin>>dd;
	cout<<"Enter divisior : ";
	cin>>dr;
	qt=dd/dr;
	rr=dd%dr;
	cout<<"Dividend is : "<<dd<<endl;
	cout<<"Divisior is : "<<dr<<endl;
	cout<<"Quotient is : "<<qt<<endl;
	cout<<"Remainder is : "<<rr<<endl;
	cout<<"Equation is : ";
	cout<<dd<<" = "<<dr*qt<<" + "<<rr<<endl;
	return 0;
}
