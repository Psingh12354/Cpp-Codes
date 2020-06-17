/*
Function	Description
abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x, in radians
asin(x)	Returns the arcsine of x, in radians
atan(x)	Returns the arctangent of x, in radians
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x, in radians
cosh(x)	Returns the hyperbolic cosine of x, in radians
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x)	Returns the hyperbolic tangent of a double value
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<sqrt(64)<<"\n";
	cout<<log(2)<<"\n";
	cout<<round(5.7)<<"\n";
	cout<<abs(5.7-6)<<"\n";
	cout<<acos(30)<<"\n";
	cout<<asin(30)<<"\n";
	cout<<atan(30)<<"\n";
	cout<<cbrt(2)<<"\n";
	cout<<ceil(5.6)<<"\n";
	cout<<cos(30)<<"\n";
	cout<<cosh(30)<<"\n";
	cout<<exp(4.5)<<"\n";
	cout<<expm1(5)<<"\n";
	cout<<fabs(5)<<"\n";
	cout<<fdim(5,6)<<"\n";
	cout<<floor(5.6)<<"\n";
	cout<<hypot(5,6)<<"\n";
	cout<<fma(5,6,10)<<"\n";
	cout<<fmax(5,6)<<"\n";
	cout<<fmin(5,7)<<"\n";
	cout<<fmod(5,6)<<"\n";
	cout<<pow(2,6)<<"\n";
	cout<<sin(30)<<"\n";
	cout<<sinh(30)<<"\n";
	cout<<tan(30)<<"\n";
	cout<<tanh(30)<<"\n";
	return 0;
}
