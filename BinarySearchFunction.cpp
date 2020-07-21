/* Binary Search
Another method of searching element in list or array
is called searching and Binary search is the method
that divide the element and start from middle if value match otherwise
it will move toware it left or right depend on the situation
eg-: 
2 4 5 6 8 9 10
if you search for n=6 then
mid=(7+1)/2;
if element found at given position than it will returnthat posiiton otherwise
move to next condition
*/
#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2;  
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
	return -1;
}
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 

