// LCM stands for lowest common factor
// eg : LCM(10,4) is 20
// In this program i am going to find LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n;
	cout<<"Enter the two numbers for LCM : "<<endl;
	cin>>n1>>n2;
	for(n=n1>n2?n1:n2;n<=n1*n2;n++)
		if(n%n1==0 && n%n2==0)
			break;
	cout<<"Factorial of number is "<<n<<endl;
	return 0;
}
