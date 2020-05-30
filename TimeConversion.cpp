#include<iostream>
using namespace std;
int main()
{
	int hour,minute,second=0;
	cout<<"Enter the value of hour minute and second :"<<endl;
	cin>>hour;
	minute=hour*60;
	second=minute*60;
	cout<<hour<<" hours = "<<minute<<" minute = "<<second<<"second"<<endl;
	return 0;
}
