#include<iostream>
#include<math.h>
using namespace std;
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
int main() 
{ 
	int arr[]={5,6,8,2,3,45,65,67,5424,34,54,5,54};
	cout<<"Array element is : ";
	for(int i=0;i<13;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x;
	cout<<"Enter the element to search : "<<endl;
	cin>>x; 
    int index = search(arr, n, x); 
    if (index == -1) 
        cout << "Element is not present in the array"; 
    else
        cout << "Element found at position " << index; 
  
    return 0; 
} 
