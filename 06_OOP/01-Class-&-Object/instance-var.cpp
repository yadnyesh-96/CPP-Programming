
#include <iostream>
using namespace std;

class Student{
	
	public :
		string name;
		int age;
		
		Student(string name, int age){
			this->name=name;
			this->age=age;
		}
		
		void display(){
			cout<<"Name :"<<name<<" Age:"<<age<<endl; 
		}
};

int main(){

	Student s1("Amol Patil",21);
	Student s2("Yogesh Mali",22);
	
	s1.display();
	s2.display();
	
	return 0;
}