#include<iostream>
using namespace std;
bool Luck(int n)
{
	static int counter=2;
	int next=n;
	if(counter>n)
	return true;
	if(n%counter==0)
	return false;
	next-=next/counter;
	counter++;
	return Luck(next);
}
int main()
{
	int x;
	char q;
	cout<<"Enter the value of x : \n";
	cin>>x;
		if(Luck(x))
		cout<<x<<" is a lucky number.";
		else
		cout<<x<<" is not a lucky number.";
	return 0;
}
