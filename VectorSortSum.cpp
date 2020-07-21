#include<iostream>
using namespace std;
#include<math.h>
#include<vector>
#include<algorithm>
int main()
{
	vector<int>v;
	cout<<"Enter the size of array : "<<endl;
	int size;
	cin>>size;
	int a;
	cout<<"Enter the value : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<size;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	int sum=0;
	cout<<"Sum of all element : "<<endl;
	for(int i=0;i<size;i++)
	{
		sum+=i;
	}
	cout<<"Sum is = "<<sum<<"\n";
	return 0;
}
