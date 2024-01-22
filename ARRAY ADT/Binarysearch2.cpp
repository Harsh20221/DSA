#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;
struct Array {    
  int A[10];
  int length;
};

int BinarySearch(struct Array arr, int length, int key)
{
    int mid, min, max;
    min = 0;
    max = length - 1; // Fix: Use the 'length' parameter instead of 'arr.length'
    while (min <= max) {
        mid = (min + max) / 2;
        if (key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
    return -1; // Fix: Return -1 to indicate key not found
}

int main() {    
    struct Array arr1 = {{2,4,6,7,9,5},6};
    cout << "Enter the key to be searched:";
    int key;
    cin >> key;
    cout << "The key is found at index:" << BinarySearch(arr1, arr1.length, key); // Fix: Pass 'arr1.length' instead of 'arr1.length-1'

    return 0;
}

