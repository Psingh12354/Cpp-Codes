#include<iostream>
using namespace std;
class BubbleSort{
public:
	void sort()
{
	
	int arr[50],n,i,j,temp;
	cout<<"Enter the numbers : \n";
	cin>>n;
	cout<<"Enter the array elements : \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"After sorting : \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
};
int main()
{
	BubbleSort ob;
	ob.sort();
	return 0;
}
