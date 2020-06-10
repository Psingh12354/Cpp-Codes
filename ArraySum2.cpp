#include<iostream>
using namespace std;
int main()
{
	int a[5],sum=0;
	cout<<"Enter number is "<<endl;
	for(int i=0;i<5;++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"Total Sum = "<<sum<<endl;
	return 0;
}
