
#include<iostream>

int pow(int base, int ind){
	if(ind==0){
		return 1;
	}

	return base * pow(base, ind - 1);;
}

int main(){
	int no=pow(2,3);
	std::cout<<no<<std::endl;
	return 0;
}