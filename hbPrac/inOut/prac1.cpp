#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a =0;
    int sum = 0;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    while(cin >> a){
        sum = sum + a;
    }

    cout<< "The sum of the input integers is: "<< sum<< endl;

    return 0;
}