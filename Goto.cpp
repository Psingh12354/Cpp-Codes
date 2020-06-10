#include<iostream>
using namespace std;
int main()
{
	float num,avg,sum=0.0;
	int i,n;
	cout<<"Maximum number of input is "<<endl;
	cin>>n;
	for(i=1;i<=n;++i)
	{
		cout<<"Enter the value of n : "<<i<<endl;
		cin>>num;
		if(num<0.0)
		{
			goto jump;
		}
		sum+=num;
	}
	jump:
		avg=sum/(i-1);
		cout<<"average is "<<avg<<endl;
		return 0;
}
