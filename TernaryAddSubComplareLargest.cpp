#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	int c,d,sub;
	int max;
	cout<<"Enter the value of a and b :"<<endl;
	cin>>a>>b;
	cout<<"Enter the value of c and d :"<<endl;
	cin>>c>>d;
	sum=a+b;
	cout<<"Sum = "<<sum<<endl;
	sub=a-b;
	cout<<"Sub = "<<sub<<endl;
	max=(sum>sub)?sum:sub;
	cout<<"Maximum of number is "<<max<<endl;
	return 0;
}
