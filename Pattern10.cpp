#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char n,alphabet='A';
	cout<<"Enter the Alphabet : ";
	cin>>n;
	cout<<toupper(n)<<endl;
	cout<<"\n";
	for(int i=1;i<=(n-'A'+1);i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<alphabet<<" ";
		}
		alphabet++;
		cout<<"\n";
	}
	return 0;
}
