/*The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.
The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1.
The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.
The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.
The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it
*/
#include<iostream>
using namespace std;
int main()
{
	int a=7,b=4; //store in 4 digit format int
	cout<<"Bitwise and : "<<(a&b)<<"\n";
	cout<<"Bitwise or : "<<(a|b)<<"\n";
	cout<<"Bitwise not : "<<(~a&a)<<"\n";
	cout<<"Left shift : "<<(a<<1)<<"\n"; // it will make 7 which is 0111 to 1110(14)
	cout<<"Right shift : "<<(a>>1)<<"\n"; //it will make 7 which is 0111 to 0011(3)
	cout<<"Xor operator : "<<(a^b)<<"\n";
}
