#include <iostream>
using namespace std;

int main(){


    int input;

    cout << "Please enter a number: ";
    cin >> input;

    if (input % 2 == 0){
        cout << "\n The number entered was an even number. \n";
    } else{
        cout << "The number eneterd was an odd number.";
    }

    return 0;
}