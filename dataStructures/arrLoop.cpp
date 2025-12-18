#include <iostream>
using namespace std;

int main()
{
    int bucky [9];

    cout<< "Element - Value"<< endl;

    for (int i = 0; i<9; i++){
        bucky [i] = 99;

        cout<< i<< "   ----   " << bucky[i]<< endl;
    }

    return 0;
}