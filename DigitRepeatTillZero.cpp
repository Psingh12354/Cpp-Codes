#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int numSquareSum(int n) 
{ 
    int squareSum = 0; 
    while (n) 
    { 
        squareSum += (n % 10) * (n % 10); 
        n /= 10; 
    } 
    return squareSum; 
} 
  
int happy(int n) 
{ 
    set<int> st; 
    while (1) 
    { 
        n = numSquareSum(n); 
        if (n == 1) 
            return true; 
        if (st.find(n) != st.end()) 
            return false; 
        st.insert(n); 
    } 
} 
int main()
{
	int n=19;
	if(happy(n)){
		cout<<n<<" is happy number!\n";
	}
	else{
		cout<<n<<" is not a happy number";
	}
}
