#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	int n;
	cout<<"Enter the number to check wheather it is in power or not : "<<endl;
	cin>>n;
	
	for(int i=0;i<=n;2*i++)
	{
		if(pow(2,i)==n)
		{
			cout<<"Number is power of two "<<endl;
			break;
		}
	}
	cout<<"Nothing is above then number is not a power of 2 "<<endl;

	return 0;
}
