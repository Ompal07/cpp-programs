#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally(int a, int b)
: regVar(a), constVar(b) // member initialiser for regular and const variables
{
    cout << "i am the constructor;" << endl;
}


void Sally::printVariable(){
    cout << "regular variable is: "<< regVar <<"\nconst variable is: "<< constVar << endl;
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