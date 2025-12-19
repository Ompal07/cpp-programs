#include <iostream>
using namespace std;

int main()
{
    int input;



    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    cin >> input;
    int smallestNumber = input;
    int largestNumber = input;
    int count = 0;

    while (cin>> input){
        cout << input;
        if (input < smallestNumber){
            smallestNumber = input;
            count++;
        } else if(input > largestNumber) {
            largestNumber = input;
            count++;
        } else{
            count++;
        }
    }

    printf ("Min: %d\nMax: %d\nCount: %d", smallestNumber, largestNumber, count); 
    
    return 0;
}