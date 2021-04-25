#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int substr(string str1,string str2){
	int n1=str1.length();
	int n2=str2.length();
	if(n1!=n2){
		return 0;
	}
	string str3="";
	str3.append(str1);
	string str4="";
	str4.append(str2);
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	for(int i=0;i<n1;i++){
		if(str1[i]!=str2[i]){
			return 0;
		}
	}
	string temp=str3+str3;
	if(temp.find(str4)!=string::npos){
		return 1;
	}	
	return 0;
//   if (str1.length() != str2.length())
//        return false;
//  
//   string temp = str1 + str1; 
//  return (temp.find(str2) != string::npos);
}
int main(){
	string str1="codeQuotient";
	string str2="Quotientcode";
	if(substr(str1,str2)){
		cout<<"possible";
	}
	else{
		cout<<"not possible";
	}
}
