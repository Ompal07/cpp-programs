#include <iostream>
using namespace std;

int main()
{
    int bertha[2][3] = {{12, 23, 435}, {2,3,4}};
    // cout << bertha[1][1] << endl;

    for (int row = 0; row<2; row++){
        for (int column = 0; column<3; column++){
            cout << bertha[row][column]<< "\t";
        }
        cout << "\n";
    }

    return 0;
}