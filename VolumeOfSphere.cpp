#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main()
{
	    int rad1;
    	float volsp;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
        cin>>rad1;
        volsp=(4 * PI * pow(rad1,3))/3;
        cout<<" The volume of a sphere is : "<< volsp << endl;
        cout << endl;
        return 0;
        
}
