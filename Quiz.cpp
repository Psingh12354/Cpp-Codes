#include<iostream>
#include<string>
using namespace std;
int inp;
int total;
class Questions{
	private:
		string Question_text;
		string Answer_1;
		string Answer_2;
		string Answer_3;
		string Answer_4;
		int Correct_Answer;
		int Scores;
	public:
		void Inputs(string,string,string,string,string,int,int);
		void Question();				
};
int main()
{
	cout<<"* * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"* 				* Welcome To Quiz *    *\n";
	cout<<"* * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"Press enter to start the quiz ...\n";
	cin.get();
	string Name;
	int age;
	cout<<"Enter your name? \n\n";
	getline(cin,Name);
	cout<<"\nEnter your age? \n\n";
	cin>>age;
	cout<<"\n";
	string click;
	cout<<"Are you ready to start the quiz "<<Name<<"? Yes/No."<<endl;
	cin>>click;
	if(click=="Yes")
	{
		cout<<"\n";
		cout<<"Good Luck for Quiz!\n";
	}
	else
	{
		cout<<"Thankyou, for your visit!\n";
		return false;
	}
	Questions q1;
	Questions q2;
	q1.Inputs("What is compulsory in C++?\n","start()","system()","main","program()",3,10);	
	q2.Inputs("The statement i++ is equal to?\n","-1","1","+1","None of the above",3,10);
	
	q1.Question();
	q2.Question();
	cout<<"Your score is "<<total<<" out of 20\n";
	if(total>=15)
	{
		cout<<"Great you passed!\n";
	}
	else
	{
		cout<<"Sorry, you failed.\n";
		cout<<"Try again!\n";
	}
	return 0;
}
void Questions::Inputs (string q,string a1,string a2,string a3,string a4,int c,int a)
{
	Question_text=q;
	Answer_1=a1;
	Answer_2=a2;
	Answer_3=a3;
	Answer_4=a4;
	Correct_Answer=c;
	Scores=a;
}
void Questions::Question()
{
	cout<< endl;
    cout<<Question_text<<endl;
    cout<<"1. "<< Answer_1<<endl;
    cout<<"2. "<< Answer_2<<endl;
    cout<<"3. "<< Answer_3<<endl;
    cout<<"4. "<< Answer_4<<endl;
    cout<<endl;
    cout<<"What is your answer?(using corresponding numnber)\n";
    cin>>inp;
    if(inp==Correct_Answer)
    {
    	cout<<"Great! you are correct\n";
    	total+=Scores;
    	cout<<"Scores : "<<Scores<<" Out of 20!\n";
	}
	else
	{
		cout<<"You are wrong.\n";
		cout<<"Scores : "<<Scores<<"!\n";
		cout<<"Correct answer is "<<Correct_Answer<<".\n"; 
	}
}
