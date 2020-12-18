#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=10 || n>=99) //input number example 99,59,69,79,89,49,39,29,19
	{
		cout<<"Number is invalid";
	}
	else
	{
		int first=n/10; // 59/10=5.9 int is floor value
		int second=n%10;// 59%10=9
		int sum=first+second;
		int product=first*second;
		sum+product==n?cout<<"Special number":cout<<"Not special";
	}
}
