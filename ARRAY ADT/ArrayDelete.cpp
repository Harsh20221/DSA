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

void DeleteArray(struct Array *arr , int index ){
    if ( index>=0 && index<=arr->length){
        for ( int i = index ; i<arr->length-1 ; i++) //! Fix the loop condition // Remember to increase  the loop variable , make sure that initially i will be equal to array's index  and then the loop will continue till i is smaller than array's length-1    , we subract 1 from the length of the array because we are shifting the  elements towards right 
        arr->A[i] = arr->A[i+1]; //? Shifting the elements to the left side from  0 to length of the array   //! In this loop we are moving i from left to right because we are increasing i but we are shifting elements from right to left because we are decreasing the index of the array elements
      arr->length--; // Decrementing the length of the array 
    } //* Thee way delete works is it  shifts whatever element at +1 greater index to the specified index and also adjusts rest of the array to move towards left and then we decrement the length of the array by 1
}

int main (){
struct  Array arr1 = {{2,4,6,7,9,5},10,6}; //! Initializing the array by specifying array elements , size and length of the array // make sure not to write arr instead of Arr as it will give error
DeleteArray(&arr1,3); //? Calling the delete function to delete the element at the index 3 of the array // Remember to pass the address of the array as the argument to the function like &arr
DisplayArray(arr1); //? Calling the display function to display the elements of the array
}