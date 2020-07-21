#include<iostream>
using namespace std;
int main()
{
	int light,night,power;
	cout<<"1 for active "<<endl;
	cout<<"0 for inactive "<<endl;
	cout<<"Press 1 if light glow : "<<endl;
	cin>>light;
	cout<<"Press 1 if night : "<<endl;
	cin>>night;
	cout<<"Press 1 if power : "<<endl;
	cin>>power;
	if(light==1 && power==1 && night==1 )
	{
		cout<<"Light glow "<<endl;
	}
	else
	{
		cout<<"Light not glow "<<endl;
	}
	return 0;
}
