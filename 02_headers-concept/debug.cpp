
#include <iostream>
using namespace std;

int main(){

    const char*  string = "Hello";
    
    for(int i=0; i<5; i++){
        const char c = string[i];
        cout << c << endl;
    }
}