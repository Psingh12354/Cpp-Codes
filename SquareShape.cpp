#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for(int i=1;i<=size;i++)
    {
    	for(int j=0;j<=size;j++)
    	{
    		cout<<" # ";
		}
		cout<<"\n";
	}
	return 0;
}
