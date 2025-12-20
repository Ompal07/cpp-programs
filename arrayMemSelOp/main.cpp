#include <iostream>
#include "Sally.h"
using namespace std;

int main(){

    Sally sallyObject;

    Sally *sallyPointer = &sallyObject;

    // sallyObject.printCrap();
    sallyPointer -> printCrap();

    return 0;

    // whenever using the object use "." sign and
    // use -> symbol while calling the functions from a class using ptr 

}