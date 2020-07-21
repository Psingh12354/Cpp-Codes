/* Selection sorting
A method of arranging a input in any order called selection sort
it select smallest value one by one 
It is a type of internal sorting
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[50],i,j,temp,num;
	cout<<"**** Selection Sort ****\n\n";
	cout<<"Enter the size of array : \n";
	cin>>num;
	cout<<"Enter the element in array : \n";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"After selection sort complete your output is : \n";
	{
		for(j=0;j<num;j++)
		{
			cout<<arr[j]<<" ";
		}
	}
	return 0;
}
