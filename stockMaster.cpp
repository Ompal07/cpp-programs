#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float totalAmount;
    float principalAmount = 1000;
    float returns = 0.1;

    for (int day = 1; day<=30; day++){
        totalAmount = principalAmount * pow(1+returns, day);
        cout << day << "  -----------  " << totalAmount << "\n";
    }
    
    return 0;
}