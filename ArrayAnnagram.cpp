#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int anagram(char arr1[],char arr2[],int n1,int n2)
{
	if(n1!=n2)
		return false;
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	for(int i=0;i<n1;i++)
	{
		if(arr1[i]!=arr2[i])
			return false;
	}
	return true;
}
int main()
{
	char arr1[]={'a','b','e','d'};
	char arr2[]={'b','c','d','a'};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	if(anagram(arr1,arr2,n1,n2)){
		cout<<"Array is annagram";
	}
	else{
		cout<<"Not an anagram";
	}
	return 0;
}
