
#include <iostream>

class Student {

    public : 
        Student(){
            std::cout<<"I am Student Constructor ";
        }
};

int main(){

    Student s1; // output = > I am Student Constructor 

    return 0;
}