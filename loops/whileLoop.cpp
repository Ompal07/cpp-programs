#include <iostream>
using namespace std;

int main()
{
    int sandwiches = 10;
    while(sandwiches >= 0){
        cout << "I ate a sandwich. Remaining sandwiches: " << sandwiches<< endl;
        sandwiches = sandwiches - 1;
    }
    cout << "I have no sandwiches left."<< endl;

    return 0;
}