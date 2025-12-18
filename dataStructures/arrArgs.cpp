#include <iostream>
using namespace std;

void printArray (int theArray[], int sizeOfArray);

int main()
{
    int bucky[3]= {20,34,123};
    int jessica[6] = {1,2,3,4,5,6};

    printArray(jessica , 6);
    
    return 0;
}

void printArray (int theArray[], int sizeOfArray){
    
    for (int x=0; x<sizeOfArray; x++){
        cout << theArray[x] << endl;
    }

}