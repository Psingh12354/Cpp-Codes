#include<iostream>
using namespace std;
void Tower(int a,char from,char aux,char to)
{
	if(a==1)
	{
		cout<<"Move"<<" "<<from<<" "<<"To"<<" "<<to<<" "<<"\n";
		return;
	}
	else
	{
		Tower(a-1,from,aux,to);
		cout<<"Move"<<" "<<a<<" "<<"From"<<" "<<from<<" "<<"To"<<" "<<to<<" ";
		Tower(a-1,from,aux,to);
	}
}
int main()
{
	int n;
	cout<<"***** Tower Of Hanoi *****\n";
	cout<<"Enter the number of disc : ";
	cin>>n;
	cout<<"\n";
	Tower(n,'A','B','C');
	return 0;
}
