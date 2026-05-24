

#include <iostream>
#include <string>

class Book{
    public :
        std::string title;
        std::string author;
        int year;
};


int main(){

    Book b1;
    b1.title  = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.year = 1960;

    std::cout<< b1.title << " " << b1.author << " " << b1.year << "\n"; 

    Book b2;
    b2.title = "Java";
    b2.author = "James Gosling";
    b2.year  = 1760;

    std::cout<< b2.title << " " << b2.author << " " << b2.year << "\n"; 


    return 0;
}