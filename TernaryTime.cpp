#include<iostream>
#include<string>
int main()
{
	int time=20;
	std::string result=(time<18)?"Good day.":"Good evening.";
	std::cout<<result;
	return 0;
}
