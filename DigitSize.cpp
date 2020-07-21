#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x and y : "<<endl;
	while(cin>>x>>y)
	{
		stringstream str1;
		str1<<x+y;
		cout<<str1.str().size()<<endl;
	}
	return 0;
}
