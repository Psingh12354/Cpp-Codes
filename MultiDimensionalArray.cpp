// Multidimensional Array
#include<iostream>
using namespace std;
int main()
{	// 4 5 6 
	// 5 6 7
	// Here in above line i mean that array is of row wise size=2 and column wise size=3
	int arr[2][3]={{4,5,6},{5,6,7}};
	{
		for(int row=0;row<2;row++)
		{
			for (int column=0;column<3;column++)
			{
				cout<<arr[row][column]<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
