#include <iostream>
using namespace std;


// Sentinal values are generally used to run loops until user inputs something pre-configured to exit/end the program.
int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter the first persons age or -1 to quit: "<< endl;
    cin>> age;

    while (age != -1){
        ageTotal += age;
        numberOfPeopleEntered++;

        cout<< "Enter next person's age or -1 to exit: " << endl;
        cin >> age;

    }

    // int age = ageTotal/numberOfPeopleEntered;

    cout << "Total number of people were "<< numberOfPeopleEntered<< " with an average of " << ageTotal/ numberOfPeopleEntered<< endl;

    return 0;
}