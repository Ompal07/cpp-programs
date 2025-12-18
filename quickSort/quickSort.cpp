#include <iostream>
using namespace std;

void printArray (int arr[], int numberOfElements){
    for (int i = 0; i<numberOfElements; i++){
        cout<< arr[i]<< " ";
 
   }
   cout << endl<< endl;
}

void inputArray (int arr[], int numberOfElements){
    for (int i = 0; i<numberOfElements; i++){
        cin >> arr[i];
    }
}


void quickSort(int arr[], int low, int high){

    int pivot = arr[low];
    int startIndex = low;
    int stopIndex = high;
    int index = low;

    int temp =0; //used for the swapping

    // if (numberOfElements%2 == 0){
    //     pivot = numberOfElements /2;
    //     pivot -= 1;
    // }else{
    //     pivot = (numberOfElements /2 );
    // }
    // cout << low << endl;
    // cout<< high << "\n";

    while (index <= high){
        if(arr[index]> pivot){
            temp = arr[index];
            arr [index ] = arr[high];
            arr[high] = temp;

            high--;
        }else if( arr[index] == pivot){
            index++;
        }else{
            temp = arr[index];
            arr[index] = arr[low];
            arr[low] = temp;

            low++;
            index++;
        }
    }

    // printArray(arr, 14);
    if (low - startIndex>= 2){
        quickSort(arr, startIndex, low -1);
    }

    if(stopIndex - high >= 3){
        quickSort(arr, high+1, stopIndex);
    }

    // if(low>)
}




int main()
{
    int numberOfElements= 0;
    cout<< "Please enter the number of elements: ";
    cin>> numberOfElements;

    if(numberOfElements<=0){
        cout<< "Please enter number above 0 for an array: ";
        return 0;
    }




    int* unsortedArray = new int[numberOfElements];


    inputArray(unsortedArray, numberOfElements);

    cout<< "Unsorted Array: ";
    printArray(unsortedArray, numberOfElements);

    quickSort(unsortedArray, 0, numberOfElements-1);
    
    cout<< "Sorted Array: ";
    printArray(unsortedArray, numberOfElements);
    return 0;
}