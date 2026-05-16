
#include <iostream>

int main(){

    int x = 5;

    int* ptr = &x;

    std::cout<<"By ptr : = "<< ptr <<std::endl; //0x61ff08
    std::cout<<"By *ptr: = "<<*ptr <<std::endl; //5
    *ptr = 10;
    std::cout<<"(*ptr =10 ) After modify By *ptr: = "<<*ptr <<std::endl;

    int** t = &ptr;
    **t = 45;
    return 0;
}