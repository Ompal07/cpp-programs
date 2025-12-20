#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally(){
    cout << "i am the constructor;" << endl;
}

void Sally::printCrap(){
    cout << "Did someone say pushups?" << endl; 
}

void Sally::printShiz(){
    cout << "This prints a normal member function of the class"<< endl;
}

void Sally::printConst() const {
    cout << "\nThis is printing from the const function\n \n";
}

Sally::~Sally(){
    cout << "I am the deconstructor" << endl;
}