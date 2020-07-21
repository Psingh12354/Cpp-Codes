#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    	float n;
    	float Square;
		cout << "\n\n Calculate the square root :\n";
		cout << "---------------------------------------\n";		
        cout<<" Enter the number : ";
        cin>>n;
        Square=pow(n,(1.0/2.0));
        cout<<" The Square root is : "<< Square << endl;
        cout << endl;
        return 0;
}	
