#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter Number : " << endl;
    cin >> num ;

    if(num%2==0){
        cout << "EVEN Number " << endl ;
    }else{
        cout << "ODD Number " << endl ;
    }

    return 0;
}