// HCF stand for highest common factor
// eg : HCF(10,5) is 5
// In this program i am going to find HCF of two numbers
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n;
	cout<<"Enter the GCD number : "<<endl;
	cin>>n1>>n2;
	for(n=n1<n2?n1:n2;n>=1;n--)
	{
		if(n1%n==0 && n2%n==0)
		break;
	}
	cout<<"HCF of number is : "<<n<<endl;
	return 0;
}
