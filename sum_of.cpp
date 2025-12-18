#include <iostream>
using namespace std;


int firstNumber, secondNumber;
int addNumbers(int firstNumber, int secondNumber);


int main() {
    int firstNumber;
    int secondNumber; 

    cout<< "Please enter the first number: ";
    cin >> firstNumber;

    cout<< "Please enter the second number: ";
    cin>> secondNumber;


    int sumOfNumbers = addNumbers(firstNumber, secondNumber);

    
    cout<< "The sum of the two numbers is: "<< sumOfNumbers;
}

int addNumbers (int firstNumber, int secondNumber) {
    int answer = firstNumber + secondNumber;
    return answer;
}