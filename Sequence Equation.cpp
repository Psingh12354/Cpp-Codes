#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int p[]={5,2,1,3,4};
	int n=sizeof(p)/sizeof(p[0]);
	vector<int> arr(n);
	for(int i=1;i<=n;i++)
	{
		arr[p[p[i-1]-1]-1]=i;
	}


}
