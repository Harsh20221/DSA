#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
  int A[10];
  int length;
};

int BinarySearch(struct Array arr,int length  , int key)
{    
 // Move the struct Array declaration outside the while loop


    int mid , min , max ;
    min = 0 ;
    max = arr.length;
    while (min <= max) {
        mid = (min + max) / 2;              //// Every loop will be individually enclosd in a block represented by {}
        if (key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            max = mid - 1;
        } else {
            min = mid + 1;
        
        }
    }
return 0;
}

int BinarySearchusingRecursion(struct Array arr, int min, int max, int key) {
    // Base cases:
    if (min > max) {  // Key not found
        return -1;
    }

    int mid = (min + max) / 2;

    if (key == arr.A[mid]) {  // Key found at mid
        return mid;
    } else if (key < arr.A[mid]) {  // Search in the left subarray
        return BinarySearchusingRecursion(arr, min, mid - 1, key);
    } else {  // Search in the right subarray
        return BinarySearchusingRecursion(arr, mid + 1, max, key);
    }
}

int main() {    // the array name is diffrent because we are creating a new array to test the functions 
    struct Array arr1 = {{2,4,6,7,9,5},6};
    cout << "Enter the key to be searched:";
    int key;
    cin >> key;
    cout << "The key is found at index: " << BinarySearch(arr1, arr1.length, key);
    cout << "The key is found at index: " << BinarySearchusingRecursion(arr1, 0, arr1.length, key);
    return 0;
}