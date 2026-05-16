
#include <iostream>

int main(){

    int x = 5;

    int* ptr = &x;

    std::cout<<"By ptr : = "<< ptr <<std::endl; //
    std::cout<<"By *ptr: = "<<*ptr <<std::endl;

    return 0;
}