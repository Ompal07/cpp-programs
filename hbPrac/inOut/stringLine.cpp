#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout <<"Please enter a string line output: \n";
    getline (cin, s);

    cout << "The string stored is: \n"<< s;

    return 0;
}