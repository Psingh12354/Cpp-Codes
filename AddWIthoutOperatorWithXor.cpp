#include<iostream>
using namespace std;
int main()
{
	int x,y,carry;
	cout<<"Enter numbers : \n";
	cin>>x>>y;
	/* First make a table starting from 1 and infinity 
	like 1,2,4,8,16.....
	and find the number which make the exject sum of your input number
	one number at one time and fill the table in row order
	*/
	while(y!=0)
	{
		carry=x&y; /* here we use and table which means 1 and 1 is equal to 1 and all your binary
		digits value become 0
		*/
		x=x^y;/* Now use Xor table which means when two inputs are same it will give 0 and for all
		other input it will give 1*/
		y=carry<<1; /*here we are left shifting means we add one number to carry from right and shift it 
		by deleting the left most element*/
	}
	cout<<"Addition is : "<<x;
	return 0;
}
