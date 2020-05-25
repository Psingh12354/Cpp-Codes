// Operator overloading
#include<iostream>
using namespace std;
class vector{
	public:
	int x;
	int y;
	vector()
	{
		
	};
	vector(int a,int b)
	{
		x=a;
		y=b;
	}
	vector operator+(const vector&); // we return the value
	
};
vector vector::operator+(const vector& parameter){
	vector temp;
	temp.x=x+parameter.x;
	temp.y=y+parameter.y;
}
int main()
{
	vector ob1(5,6);
	vector ob2(3,4);
	vector result;
	result=ob1+ob2;
	cout<<"The result is("<<result.x<<","<<result.y<<")"<<endl;
	int x=2,y=3;
	int z=x+y;
	return 0;
}
