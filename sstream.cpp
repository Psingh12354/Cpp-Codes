#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string line = "test one two three.";
    string arr[4];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }
}
