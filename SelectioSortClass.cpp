#include<iostream>
using namespace std;
class sort{
	public:
		int arr[50];
		int i;
		int j;
		int num;
		int temp;
		void sorting()
		{
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
}

};
int main()
{
	sort ob;
	ob.sorting();
}
