#include <iostream>
using namespace std;


void printArray(int arr[], int numberOfElements){
    for (int i =0; i< numberOfElements; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findTheLargestNumber(int arr[], int n){
    int largestNumber = arr[0]; 
    int location = 0;
    for (int i = 1; i<n; i++){
        if(arr[i]>largestNumber){
            largestNumber = arr[i];
            location = i;
        }
    }
    return location;
}

void sort(int arr[], int numberOfElements){
    // int* sortedArray = new int(numberOfElements);
    // int largestNumber = findTheLargestNumber(arr, numberOfElements);
    int temp;
    int loc;

    for (int i = 0; i<numberOfElements-1; i++){
        // if (i<=numberOfElements-1-i){
            // sortedArray[numberOfElements-i-1] = findTheLargestNumber(arr, numberOfElements-i);
            loc = findTheLargestNumber(arr, numberOfElements-i);
            temp = arr[loc];
            arr[loc] = arr[numberOfElements - i -1];
            arr[numberOfElements-i-1] = temp;

            
        // };
    }

    cout << "Sorted Array: ";
    printArray(arr, numberOfElements);
}




int main()
{
    int numberOfElements;
    cout << "Enter the number of elemets: ";
    cin >> numberOfElements;

    if (numberOfElements<=0){
        cout<< "Array size must be greater than 0"<< endl;
        return 0;
    }

    int* arr = new int (numberOfElements);
    
    cout << "Enter " << numberOfElements << " integers:"<< endl;
    for (int i=0; i<numberOfElements; i++){
        cin>> arr[i];
    }


    cout<< "Unsorted list: ";
    printArray(arr, numberOfElements);

    sort(arr, numberOfElements);

    delete[] arr;
    return 0;

}