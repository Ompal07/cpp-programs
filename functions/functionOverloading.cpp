#include <iostream>
using namespace std;


void printNumber(int integer);
void printNumber(float number);

int main()
{
    int a = 54;
    float b = 21.3214;

    printNumber(a);
    printNumber(b);

    return 0;
}

void printNumber(int number){
    cout<< "Printing the integer: "<< number<< endl;
}

void printNumber(float number){
    cout<<  "Printing the float: "<< number<< endl;
}