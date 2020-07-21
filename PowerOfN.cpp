#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,n;
	int power;
	cout<<"Enter the value of base : ";
	cin>>x;
	cout<<"\n";
	cout<<"Enter the value of power : ";
	cin>>n;
	power=pow(x,n);
	cout<<x<<" Power "<<n<<" = "<<power<<endl;
	return 0;
}
