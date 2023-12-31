#include <iostream>
#include <stdio.h>
#include <stdlib.h>   
using namespace std;
struct Array {
    int A[10];
    int length;   
};

int InsertInsortedArray(struct Array &arr , int x)  //* We are using call by referance so that the changes in this array gets reflected outside the array too 
{    
    int i = arr.length - 1; // Start from the last element
 
    while (i >= 0 && arr.A[i] > x) {   //
        arr.A[i + 1] = arr.A[i]; // Shift all elements to the right
        i--;   //?  We are moving from right to left because we are decreasing the value of i 
    }

    arr.A[i + 1] = x; // Insert the element at the correct position //! we are entering the elememnt in i+1 position bevause  let's take an example array [1,2,3,4,5,6,7,8,9] and we want to insert 10 in it so we will start from the last element and compare it with 10 and if it is greater than 10 then we will shift it to the right and then we will compare the next element with 10 and if it is greater than 10 then we will shift it to the right and we will continue this process until we find an element which is smaller than 10 and then we will insert 10 in the next position of that element
    arr.length++; // Update the length of the array

    return arr.length; // Return the new length of the array
}

int main(){
    struct Array arr1={{1,2,3,4,5,6,7,8,9},9};
    InsertInsortedArray(arr1,10);
}