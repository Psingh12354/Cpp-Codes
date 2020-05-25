// Here in this program i have explained about StructFunction in c++
#include<iostream>
#include<cstring> // this this we include to use strcpy 
using namespace std;
struct Books{
	char Name[20];
	int id=30;
};
void Book1(struct Books book) // Here i use this function which call structure with variable name book
{
	cout<<"Name is : "<<book.Name<<endl;
	cout<<"Id is : "<<book.id<<endl;
}
int main()
{
	struct Books book1;
	strcpy(book1.Name,"Code");
	book1.id;
	Book1(book1); // you call function here
	return 0;
}
