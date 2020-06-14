#include<iostream>
using namespace std;
class Student{
	public:
		int m1,m2;
		char name[20];
		int total;
		int rollno;
	void std(){
		cout<<"Enter the name of student :"<<endl;
		cin>>name;
		cout<<"Enter the roll number of student :"<<endl;
		cin>>rollno;
		cout<<name<<" of rollno "<<rollno<<" has marks : ";
		cin>>m1>>m2;
	}
};
class Sports{
	public:
		int sm;
		void smstd(){
			cout<<"Enter the sports marks of student :"<<endl;
			cin>>sm;
		}
};
class Result:public Student,public Sports{
	public:
		int tot,avg;
		void display()
		{
			tot=(m1+m2+sm);
			avg=(tot/3);
			cout<<"Roll No :"<<rollno<<" has a total of"<<tot;
			cout<<"Average is :"<<avg<<endl;
		}
};
int main()
{
	Result obj;
	obj.std();
	obj.smstd();
	obj.display();
	return 0;
}
