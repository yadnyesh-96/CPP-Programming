#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int age;
		
		void display(){
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};

int main(){
	Student s1;
	s1.name="Yadnyesh";
	s1.age=21;
	
	s1.display();
	return 0;
}