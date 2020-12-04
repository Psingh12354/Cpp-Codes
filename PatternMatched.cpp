#include<iostream>
#include<string.h>
using namespace std; 
void Search(char* pat, char* txt) 
{ 
    for (int i=0;i<= strlen(txt) - strlen(pat);i++) { 
        int j; 
        for (j = 0; j < strlen(pat); j++) 
            if (txt[i + j] != pat[j]) 
                break; 
        if (j == strlen(pat)) 
            cout << "Pattern found "<< i << endl; 
    } 
} 
int main() 
{ 
    char txt[] = "AABAACAADABAAABAA"; 
    char pat[] = "AABA"; 
    Search(pat, txt); 
    return 0; 
}
