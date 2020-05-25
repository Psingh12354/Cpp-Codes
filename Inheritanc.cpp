//  Inheritance are use to increase reusability
// In this program i find the area of polygon which is rectangle and triangle basically
#include<iostream>
using namespace std;
class Polygon{
	public:
		void values(int a,int b)
		{
			width= a;
			height= b;
		}
	protected:
			int width;
			int height;
};
class rectangle: public Polygon{
	public:
	int getArea(){
		return (width * height);	
	}
	
};
class triangle: public Polygon{
	public:
		int getArea(){
			return (width*height/2);
		}
};
int main(void)
{
	rectangle ob;
	triangle ob1;
	ob.values(5,6);
	ob1.values(6,8);
	cout<<"Total area of rectangle = "<<ob.getArea()<<endl;
	cout<<"Total area of triangle = "<<ob1.getArea()<<endl;
	return 0;
} 
