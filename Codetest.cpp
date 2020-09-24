#include<iostream>
using namespace std;
int main()
{
    int x = 80; 
    int &y = x;
    x++;
    cout <<x << " " <<--y;
    return 0;
}
