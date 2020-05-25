// Here in this program i have explained about Struct in c++
#include<iostream>
#include<cstring> // this this we include to use strcpy 
using namespace std;
struct Books{
	char Name[20];
	int id=30;
};
int main()
{
	struct Books book1;
	strcpy(book1.Name,"Code");
	book1.id;
	cout<<"Name is : "<<book1.Name<<endl;
	cout<<"Id is : "<<book1.id<<endl;
	return 0;
}
