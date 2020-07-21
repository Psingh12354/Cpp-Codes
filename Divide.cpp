#include<iostream>
using namespace std;
int main()
{
	int dividend,divisior;
	cout<<"Enter the number : "<<endl;
	cin>>dividend;
	cout<<"Enter the dividend : "<<endl;
	cin>>divisior;
	cout<<"Divide = "<<dividend%divisior<<endl;
	for(int i=0;i<=10;i++)
	{
		if(dividend%divisior==0)
		{
			cout<<"result = "<<i<<endl;
		}
		else
		{
			cout<<"Not divisible"<<endl;
		}
	}

	return 0;
}
