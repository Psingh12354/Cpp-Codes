//A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.
#include<iostream>
using namespace std;
class shape{
public:
void setShape(int a,int b){
width=a;
height=b;
}
virtual int area()
{
    return 0;
}
// virtual int area()=0; is pure virtual function
protected:
int height;
int width;
};
class rectangle: public shape
{
    public:
    int area()
    {
        return (height*width);
    }
};
class triangle:public shape
{
    public:
    int area(){
        return (height*width/2);
    }
};

int main()
{
    rectangle rec;
    triangle tri;
    shape poly;
    shape *poly1=&rec;
    shape *poly2=&tri;
    shape *poly3=&poly;
    poly1->setShape(10,20);
    poly2->setShape(10,20);
    poly3->setShape(10,20);
    cout<<rec.area()<<endl;
    cout<<tri.area()<<endl;
    cout<<poly.area()<<endl;
    return 0;


}