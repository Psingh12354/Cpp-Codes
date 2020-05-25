// A class is a collection of data under single name
// Setter/Getter function
#include<iostream>
#include<string>
using namespace std;
class Books{
	public:
		int id=32;
		void setName(string x)
		{
			name=x;
		}
		string getName()
		{
			return name;
		}
	private:
		string name;
		
};
int main()
{
	Books object;
	object.setName("C++ Tute ");
	cout<<object.getName()<<" & "<<"ID : "<<object.id<<endl;
	return 0;
}
