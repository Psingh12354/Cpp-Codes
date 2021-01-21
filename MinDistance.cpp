#include <bits/stdc++.h> 
using namespace std; 
  
void minAdjDifference(char p,char arr[], int n) 
{ 
	for(char i='A';i<='Z';i++)
	{
		if(arr[i]!=i)
		{
			count+1;
		}
			
	}

//    if (n < 2) 
//        return; 
//    int res = abs(arr[1] - arr[0]); 
//    for (int i = 2; i < n; i++) 
//        res = min(res, abs(arr[i] - arr[i - 1])); 
//    res = min(res, abs(arr[n - 1] - arr[0])); 
//    cout << "Min Difference = " << res; 
} 
int main() 
{ 
	int count=0;
	char p="AHELLO";
	for(char i='A';i<='Z';i++)
	{
		count+=1;
		
	}
	char arr[count];
	for(char i='A';i<='Z';i++)
	{
		arr[i]=i;
		cout<<arr[i];	
	}
    minAdjDifference(p,arr,count); 
    return 0; 
} 
