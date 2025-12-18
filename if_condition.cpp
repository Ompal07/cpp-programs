#include <iostream>
using namespace std;

void printSumOfTwoNumbers();


int main(){

    printSumOfTwoNumbers();

    return 0;
}

void printSumOfTwoNumbers(){
    int firstNumber;
    int secondNumber;

    cout<<"Please enter the first number: ";
    cin>> firstNumber;

    cout<< "Please enter the second number: ";
    cin>> secondNumber;

    cout<< "\nThe sum of the two given numbers is: "<< firstNumber+secondNumber;
}

void printAge(int age){
    cout<<"Please enter your date of birth: ";
    cin>>age;
}