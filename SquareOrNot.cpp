#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cout<<"Enter first coordinate\n";
	cin>>x1>>y1;
	cout<<"Enter second coordinate\n";
	cin>>x2>>y2;
	cout<<"Enter third coordinate\n";
	cin>>x3>>y3;
	cout<<"Enter fourth coordinate\n";
	cin>>x4>>y4;
	if((x2-x1) && (y2-y1))
	{
		if((x3-x2) && (y3-y2))
		{
			if((x4-x3) && (y4-y3))
			{
				if((x1-x4) && (y1-y4))
				{
					cout<<"Input value forms a square!";
				}
				else
				{
					cout<<"4 to 1 doesn't forms a square!";
				}
			}
			else
			{
				cout<<"3 to 4 doesn't forms a square!";
			}
		}
		else
		{
			cout<<"2 to 3 doesn't forms a square!";			
		}
	}
	else
	{
		cout<<"1 to 4 doesn't forms a square!";
	}
	return 0;
}
