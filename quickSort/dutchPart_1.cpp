#include <iostream>
// #include <vector>

using namespace std;

void printArray (int arr[], int x){
    for(int i = 0 ; i<x; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}


int* quickSort(int arr[], int numberOfElements, int low){

    int pivot = arr[low];
    int tempSwap;
    int lt = low;
    int gt = numberOfElements-1;

    int endPosition; 

    int i = low;

        while (i<=gt){
            if (arr[i]==pivot){
                i++;
                // continue;
            }else if(arr[i]<pivot){
                tempSwap = arr[lt];
                arr[lt] = arr [i];
                arr [i] = tempSwap;

                lt++;
                i++;
                // continue;
            }else{
                tempSwap = arr[gt];
                arr[gt] = arr[i];
                arr[i] = tempSwap;

                gt--;
            }
        }
    


    printArray (arr, 8);

    cout<< i<< endl;
    

    if (low<gt){
        quickSort(arr, numberOfElements-i , i);
    }

    return arr;




    
}
int main()
{


    int unsortedArr[8] = {5, 5, 2, 8, 0, 1, 6, 5};

    quickSort(unsortedArr, 8, 0);

    // int* sortedArr = quickSort(unsortedArr, 8);

    // cout<< "Sorted Array: " << *sortedArr;


    return 0;
}