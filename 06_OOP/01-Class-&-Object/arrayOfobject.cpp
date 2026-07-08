#include <iostream>

using namespace std;

class Student{
	public:
		int id;
		string name;
		
		void input(){
			cout<<"Enter Id and Name"<<endl;
			cin>>id>>name;
		}
		
		void display(){
			cout<<id<<" "<<name<<endl;
		}
};

int main(){
	
	Student s[3];
	
	for(int i=0; i<3; i++){
		s[i].input();
	}
	
	for(int i=0; i<3; i++){
		s[i].display();
	}
	return 0;
}