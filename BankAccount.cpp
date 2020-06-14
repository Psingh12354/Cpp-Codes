#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<string>
using namespace std;
class Account{
string name,address;
char accType;
float balance;
public:
void openAccount();
void depositeMoney();
void withdrawlMoney();
void displayAccount();
void introduction();			
};
void Account::introduction()
{
	cout<<"\n\n\n\t  BANK";
	cout<<"\n\n\t MANAGEMENT";
	cout<<"\n\n\t  SYSTEM";
	cout<<"\n\n\t in C++";
	cout<<"\n\n\t  Programming";
	cout<<"\n\n\n\nMADE BY : Priyanshu Singh";
}
void Account::openAccount()
{
	name="Priyanshu Singh";
	cout<<"Enter your full name : "<<name<<endl;
	address="Gorakhpur";
	cout<<"Enter your Address :"<<address<<endl;
	accType='S';
	cout<<"What type of account you want"
	<<" to open saving(S) or Current(C)"
	<<accType<<endl;
	balance=8000;
	cout<<"Enter How much money you want "<<balance<<endl;
	cout<<"Account Created Successfully "<<endl; 
}
void Account::depositeMoney()
{
	int Amount;
	Amount=9500;
	cout<<"Enter how much money"
	<<" you want to deposit : "<<Amount<<endl;
	balance+=Amount;
	cout<<"Current Balance is :"<<balance<<endl;
}
void Account::displayAccount(){
	cout<<"Name : "<<name<<endl
	<<"Address : "<<address<<endl
	<<"Type : "<<accType<<endl
	<<"Balance : "<<balance<<endl 
	<<endl;
}
void Account::withdrawlMoney(){
	float amount;
	amount=3200;
	cout<<"Enter how much money "
	<<" you want to withdraw : "
	<<amount<<endl;
	balance-=amount;
	cout<<"Current Balance : "<<balance;
}
int main()
{
	int choice;
	Account Customer;
	Customer.introduction();
	cout<<"\n1) Open new account \n";
	Customer.openAccount();
	cout<<"\n******************* "
	<<"*******************************\n";
	cout<<"\n2) Deposite Account \n";
	Customer.depositeMoney();
	cout<<"\n******************* "
	<<"*******************************\n";
	cout<<"\n3) Withdraw Money \n";
	Customer.withdrawlMoney();
	cout<<"\n******************* "
	<<"*******************************\n";
	cout<<"\n4) Display Account \n";
	Customer.displayAccount();
	cout<<"\n******************* "
	<<"*******************************\n";
	return 0;
}
