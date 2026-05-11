

#include<iostream>

int fibSeries(int n){
	if(n<=1){
		return n;
	}
	
	return fibSeries(n-1)+fibSeries(n-2);
}

int main(){
	int num=8;
		
		for(int i=0; i<num; i++){
			
			std::cout<<fibSeries(i)<<" ";
		}
		
	return 0;
}