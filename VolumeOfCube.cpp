#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    	int sid1;
    	float volcu;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the side of a cube : ";
        cin>>sid1;
        volcu=pow(sid1,3);
        cout<<" The volume of a cube is : "<< volcu << endl;
        cout << endl;
        return 0;
}	
