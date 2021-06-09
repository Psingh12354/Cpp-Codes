#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
//		parameterized constructor
//		A(int x,int y){
//			a=x;
//			b=y;
//		}
		A(){
			a=5;
			b=5;
		}
		void disp(){
			cout<<a<<" "<<b;
		}
};
int main()
{
	A obj;
	obj.disp();
	return 0;	
}
