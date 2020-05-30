#include <iostream>
using namespace std;

int main()
{
int r;
long number = 0, c, sum = 0, temp;

cout<<"Enter an integer upto which you want to find armstrong numbers\n";
cin>>number;
cout<<"Armstrong numbers upto given number are : "<<number<<endl;
for( c = 1 ; c <= number ; c++ )
{
sum=0;
temp = c;
while( temp != 0 )
{
r = temp%10;
sum = sum + r*r*r;
temp = temp/10;
}
if ( c == sum )
cout<<c<<"\n";

}

return 0;
}
