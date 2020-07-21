#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    	float n;
    	float Cube;
		cout << "\n\n Calculate the cube root :\n";
		cout << "---------------------------------------\n";		
        cout<<" Enter the number : ";
        cin>>n;
        Cube=pow(n,(1.0/3.0));
        cout<<" The cube root is : "<< Cube << endl;
        cout << endl;
        return 0;
}	
