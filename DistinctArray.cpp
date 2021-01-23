#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/arr[0];
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
		}
		if(count==0)
		{
			cout<<arr[i];
		}
		else
		{
			cout<<"No element is distinct!";
			break;
		}
	}
	
}
