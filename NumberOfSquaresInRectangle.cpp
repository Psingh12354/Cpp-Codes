 #include<iostream>
using namespace std;
int main()
{
	int sum=0,n,l,b;
	cout<<"L & B of rect : ";
	cin>>l>>b;
	n=l*b;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0 && l!=b)
		{
			sum++;
		}
		else
		if(n%i==0 || l!=n)
		{
			sum++;
		}
	}
	int Sum=sum+(l*b)+2;
	cout<<"Sum : "<<Sum<<"\n";
	return 0;
}
