#include <iostream> 
using namespace std; 
bool inRange(int low, int high, int x) 
{ 
    return ((x-high)*(x-low) <= 0); 
} 
int main() 
{ 
    inRange(10, 100, 30)? cout << "Yes\n":  cout  <<"No\n"; 
    inRange(10, 100, 5)?  cout << "Yes\n":  cout  <<"No\n"; 
} 
