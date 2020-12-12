#include<iostream>
using namespace std;
int fact(int n)
{
	return (n==0 || n==1)?1:n*fact(n-1);
}
int main()
{
	int n,r,Combination,Permutation;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter r : ";
	cin>>r;
	cout<<"Combination is : "<<fact(n)/(fact(r)*fact(n-r));
	cout<<"\nPermutation is : "<<fact(n)/(fact(n-r));
}
