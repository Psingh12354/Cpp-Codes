#include<iostream>
using namespace std;
int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 
int main()
{
	int p=0,ans=0;
	int n=sizeof(r);
	for(int i=0;i<n;i++){
		if (value[r[i]]>=p)
		{
			ans+=value[r[i]]
		}
		else{
			p=value[r[i]]
		}
	}
	cout<<ans<<endl;
	return 0;
}
//error
