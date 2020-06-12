#include<iostream>
using namespace std;
void show(int [],int);
int main()
{	int numbers[]={25,54,54,23,56};
	int length=5;
	show(numbers,length);
	return 0;
}
void show(int numbers[],int length)
{
	for(int i=0;i<length;i++)
	{
		cout<<numbers[i]<<endl;
	}
}
