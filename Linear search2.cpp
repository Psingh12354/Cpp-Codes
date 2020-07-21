/* 				Linear Search
Is a method use to search element one by one 
It is also called sequential search
Time consuming prcess
Algo
Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if A[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit
*/
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int c=13;
	int arr[]={5,6,8,2,3,45,65,67,5424,34,54,5,54};
	cout<<"Enter the number to search from array : "<<endl;
	cin>>n;
	for(i=0;i<c;i++)
	{
		if(arr[i]==n)
		{	
			flag=0;
			cout<<"Enter element is found at given position : "<<i+1<<endl;
		}
	}
	if(i==c)
	{
		cout<<"Enter element not found!"<<endl;
	}
	return 0;
}
