#include<iostream>
#include<cmath>
using namespace std;
void add(float a,float b)
{
	cout<<"Sum = "<<a+b<<endl;
}
void sub(float a,float b)
{
	cout<<"Subtract = "<<a-b<<endl;
}
void mul(float a,float b)
{
	cout<<"Multiply = "<<a*b<<endl;
}
void div(float a,float b)
{
	cout<<"Divide = "<<a/b<<endl;
}
void rem(int a,int b)
{
	cout<<"Remainder = "<<a%b<<endl;
}
void powe(float a,float b)
{
	cout<<"Power = "<<pow(a,b)<<endl;
}
int main()
{
	float n1,n2;
	int ch;
	do
	{
		cout<<"Enter two numbers : "<<endl;
		cin>>n1>>n2;
		cout<<"\n*****************"<<endl;
		cout<<"<1> Addition"<<endl;
		cout<<"<2> Subtraction"<<endl;
		cout<<"<3> Multiplication"<<endl;
		cout<<"<4> Division"<<endl;
		cout<<"<5> Remainder"<<endl;
		cout<<"<6> Power"<<endl;
		cout<<"<7> Exit"<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		    switch (ch) {
      case 1:
        add(n1,n2);
        break;
      case 2:
        sub(n1,n2);
        break;
      case 3:
        mul(n1,n2);
        break;
      case 4:
        div(n1,n2);
        break;
      case 5:
        rem(n1,n2);
        break;
      case 6:
        powe(n1,n2);
        break;
      case 7:
      	cout<<"Thank you."<<endl;
      	exit(0);
      default:
      	cout<<"Invalid input."<<endl;
      	cout<<"Please enter a correct input."<<endl;
	}
	cout<<"\n**********************************\n"<<endl;
}
while(1);
return 0;
}




