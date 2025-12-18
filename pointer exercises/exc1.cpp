#include <iostream>
using namespace std;

int main()
{
    
    int a;
    int b;

    int *ptrA;
    int *ptrB;

    cout <<"Please enter the 1st number: ";
    cin >> a;

    cout <<"Please enter the 2nd number: ";
    cin >>b;

    *ptrA = a;
    *ptrB = b;

    cout<< "\nThe value of the 1st integer retrieved through pointer is: "<< *ptrA << endl;
    cout<< "The value of the 2nd integer retrieved through pointer is: "<< *ptrB << endl;


    return 0;
}