#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 4, 5, 7, 13, 25, 65, 98 }; 
    int first, last, num; 
    num = sizeof(arr) / sizeof(arr[0]); 
    first = arr[0]; 
    last = arr[num - 1]; 
    cout << "First element: " << first << endl; 
    cout << "Last element: " << last << endl; 
    return 0; 
}
