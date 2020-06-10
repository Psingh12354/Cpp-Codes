#include<iostream>
using namespace std;
class student
	{
		public:
			char name;
			void Student()
			{
				cout<<"enter the name of student : "<<endl;
				cin>>name;
			}
	};
class marks:public student
	{
		public:
		int n=65;
		void Marks()
		{
			cout<<"enter the marks of student :"<<n<<endl;
		}
	};
class sports:public student
	{
		public:
			int m=55;
			void Sports()
			{
				cout<<"enter the marks of student in sports :"<<m<<endl;

			}
    };
class total:public marks,public sports
	{
		public:
			void Total()
			{
				cout<<"total marks is "<<m+n<<endl;			
			}			
    };
int main()
{	
	total ob;
	ob.Marks();
	ob.Sports();
	ob.Total();
	return 0;	
} 		
