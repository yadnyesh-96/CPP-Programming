#include <iostream>
using namespace std;

class Student{
	
	public:
		static string college;
		string name;
		
		Student(string name){
			this->name=name;
		}
		
		void display(){
			cout<<"Name :"<<name<<" studied at "<<college<<endl;
		}
};

 string Student::college;  // must required definition its creates storage 

int main(){
	Student::college = "DVVP COE";
	Student s1("Amol");
	Student s2 ("Yogesh");
	
	s1.display();
	s2.display();
	
	return 0;
}