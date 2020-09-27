#include<iostream>
using namespace std;
int main()
{
	int n,i;
	char input;
	cout<<"Type your symptopms in 1 or 0 : \n";
	int count=0;
	for(i=0;i<1;i++)
	{
		cout<<"Feaver : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Dry cough : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Breathing issue : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Tiredness : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Sore Throat : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Headache : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
			cout<<"Loss of taste or smell : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"chest pain or pressure: ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"loss of speech movement : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
		cout<<"Diarrhoea : ";
		cin>>n;
		if(n==1)
			count++;
		else
			count;
	}
	cout<<"Your symptoms ratio is "<<count<<"/10";
	return 0;
}
