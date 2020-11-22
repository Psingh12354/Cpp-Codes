#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum;
	cout<<"Enter the number : \n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"Sum is : "<<sum;
	return 0;
}
