#include<iostream>
using namespace std;
int main()
{
	int arr[] = {5, 2, 2, 3, 4, 4, 4, 5, 5}; 
	int x = sizeof(arr)/sizeof(arr[0]); 
	int y = sizeof(arr)/sizeof(arr[1]); 
	int z = sizeof(arr)/sizeof(arr[2]); 
	int a = sizeof(arr)/sizeof(arr[3]); 
	cout<<x<<" "<<y<<" "<<z<<" "<<a;

}
