
#include<iostream>

int printSeries(int n){
	if(n==0){
		return 1;
	}
	return n*printSeries(n-1);
}

int main(){
	
	int fac=printSeries(5);
	std::cout <<fac<< std::endl;
    return 0;
}
