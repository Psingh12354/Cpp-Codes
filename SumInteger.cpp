#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the integer : "<<endl;
	cin>>n;
	int integer=0;
	for(int i=1;i<=n;i++)
	{
		integer+=i;
	}
	cout<<integer<<" is the sum of integer"<<endl;
	return 0;
}
