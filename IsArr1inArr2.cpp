#include<iostream>
#include <algorithm>  
using namespace std;
int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 }; 
    int arr2[] = { 11, 3, 7, 1 }; 
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	if(n1==n2 || n1!=n2)
	{
		for(int i=0;i<n1;i++){
			if(arr1[i]=arr2[i])
			{
				cout<<"\nElement in "<<arr1[i]<<" = "<<arr2[i];
			}
			else
			{
				cout<<arr1[i]<<" is not found in ";
			}
		}
	}
}
