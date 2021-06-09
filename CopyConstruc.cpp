#include<iostream>
using namespace std;
class A{
	public:
		int x;
		A(int a) //param
		{
			x=a;
		}
		A(A &i){ //copy
			x=i.x;
		}
		
};
int main(){
	A obj1(10);
	A obj2(obj1);
	cout<<obj2.x;
}
