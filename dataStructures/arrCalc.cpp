#include <iostream>
using namespace std;

int main()
{
    int tuna [5] = {20,39,23,25,132};
    int sum = 0;

    for (int i=0; i<5; i++){
        sum = sum+ tuna[i];
    }

    cout<< "Sum of the array: "<< sum<<endl;

    return 0;
}