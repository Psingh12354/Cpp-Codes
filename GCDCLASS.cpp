// Need improvement
#include<iostream>
using namespace std;
class GCD{
	public:
	int gcd(int a,int b)
	{
		if(b==0)
		return a;
		return gcd(b,a%b);
	}
};
	int FindGcd(int arr[],int n)
	{
		int result=arr[0];
		for(int i=0;i<n;i++)
		{
			result = gcd(arr[i],result
			);
			return result;
		}
	}
int main()
{
GCD ob;
ob.gcd(10,20);
   int arr[] = { 2, 4, 6, 8, 16 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << (arr, n) << endl; 
    return 0; 
	
}
