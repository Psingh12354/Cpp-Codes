// Sum of all element in  array
#include<iostream>
using namespace std;
int main()
{
	int arr[6]={43,54,56,343,65,67};
	int sum=0;
	for(int i=0;i<6;i++)
	{
		sum+=arr[i];
	}
	cout<<"Sum of element is : "<<sum<<endl;
	return 0;
}

