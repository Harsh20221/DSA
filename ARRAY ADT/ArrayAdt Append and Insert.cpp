#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
  int A[10];
  int size;
  int length;
};

void DisplayArray(struct Array arr) {  // Display function to display the elements of the array
  cout << "The Elements are:";           // struct array arr is passed as a parameter to the function
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.A[i] << " ";
  }
}

int ArrayOperationAppend(struct Array *arr, int x) { // x is the element to be appended at the end of the array
   if ( arr -> length < arr -> size )
        arr->A[arr->length++] = x; /// Remember to increment the length of the array after appending the element , make sure to not forget this syntax also    
   return 0; // Add a return statement to fix exception 
}

int ArrayInsertoperation(struct Array *arr , int index , int x ){  // x is the element to be inserted at the index , // index is the index at which the element is to be inserted
     if ( index>=0 && index<=arr->length){
         for ( int i = arr->length ; i>index ; i--) // Fix the loop condition // Remember to decrement the loop variable , make sure that initially i will be equal to array's length and then the loop will continue i is smaller than array length and then decrement i
         arr->A[i] = arr->A[i-1]; // Shifting the elements to the right side ie from  0 to length of the array   ///! In this loop we are moving i from right to left because we are decreasing it but we are shifting elements from left to right because we are increasing the index of the array elements
            arr->A[index] = x; // Inserting the element at the index
            arr->length++; // Incrementing the length of the array 
     }
     return 0; // Add a return statement to fix exception
}

int main(){
  struct Array arr1 = {{2,4,6,7,9,5},10,6}; // Initializing the array by specifying array elements , size and length of the array // make sure not to write arr instead of Arr as it will give error
  /// and also make sure to give a new array name here instead of arr as it will give error
  
  ArrayOperationAppend(&arr1,8) ;   // Calling the append function to append the element 8 at the end of the array  // Remember to pass the address of the array as the argument to the function like &arr
  ArrayInsertoperation(&arr1,5,6); // Calling the insert function to insert the element 6 at the index 5 of the array // Remember to pass the address of the array as the argument to the function like &arr
  DisplayArray(arr1); // Calling the display function to display the elements of the array
  return 0;
}



