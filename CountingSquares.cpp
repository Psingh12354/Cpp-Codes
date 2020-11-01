#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"\t\t\t\tProgram to calculate the number of square in image : \n";
	cout<<"Enter the number of square in row : ";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(i,2);
	}
	cout<<"Sum of square element is : "<<sum;
	return 0;
}
