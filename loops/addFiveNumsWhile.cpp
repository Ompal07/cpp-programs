#include <iostream>
#include <list>
using namespace std;


int main()
{
    
    int currentNumber = 0;
    int total = 0;

    int numberOfNumbers = 5;
    while (numberOfNumbers > 0) {
        cout<< "\nEnter number " << 6-numberOfNumbers << ":";
        cin >> currentNumber;


        total = total + currentNumber;
        
        numberOfNumbers = numberOfNumbers - 1;
    }

    cout << "\n\n The total of all the numbers provided is: "<< total<< endl;


    return 0;
}