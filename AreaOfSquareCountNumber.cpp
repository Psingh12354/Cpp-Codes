 #include<iostream>
using namespace std;
int main()
{
	int sum,m,n,count=0;
	cout<<"L & B of rect : ";
	cin>>m>>n;
	if(n<m)
	{
		count=n;
		n=m;
		m=count;	
	}
	sum=m*(m+1)*(2*m+1)/6 + (n-m)*m*(m+1)/2;
	// by solving above you get sum=(m*(-m^2+3*n+3*m*n+1))/6
	cout<<"Sum : "<<sum<<"\n";
	return 0;
}
