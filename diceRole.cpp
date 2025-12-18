#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

    srand(time(0));

    for (int x =1; x < 6; x++){
        cout << "Dice roll "<<x << ": "<< 1+ (rand()%6)<< endl;
    }
    return 0;
}