// Here in this program i am going to use friend function which is use to accress private member in class
#include<iostream>
using namespace std;
class Sum{
	friend class sum;
	private:
		int a=10;
		int b=20;
};
class sum{
	public:
		void Private(Sum ob)
		{
			ob.a;
			ob.b;
			cout<<"Sum is : "<<ob.a+ob.b<<endl;
		}
};
int main()
{
	sum obj;
	Sum ob;
	obj.Private(ob);
}
