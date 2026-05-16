#include <iostream>

// int return normal function 
int getSquare(int num){
    return num*num;
}


//calculate factorial of number by function recursion

int getFac(int num){
    if(num==1){
        return 1;
    }
    return num*getFac((num-1));
}

int main(){

    int n = 5;

    std::cout<< n << " square is :" << getSquare(n) <<std::endl;
    std::cout<< n << " Factor is :" << getFac(n) <<std::endl;
    return 0;
}