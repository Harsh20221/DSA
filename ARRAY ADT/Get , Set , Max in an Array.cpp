#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
  int A[10];
  int length;
};

int get(struct Array arr, int index) {  /// array name Array has first letter capital and index is the index of the element we want to get
    for (int i = 0; i < arr.length; i++) {
        if (index == i)   //// Here we are checking if the index is equal to i or not that's why we will write index==i not index == arr.A[i] because we are not comparing indexes with the actual elemnts of the array 
            return arr.A[i];
    }
    return -1; // Return a default value when index is not found
}


int set(struct Array arr, int index, int x) {
    int p;
    for (int i = 0; i <= arr.length; i++) {   // int i must be initialised to 0 for loop to traverse from index 0 to the last index of the array
        if (index == i) {    // Here we are checking if the index is equal to i or not
            arr.A[i] = x;  // Here we are setting the value of the element at index i to x
            p= arr.A[i]; //// Here we are assigning p=arr.A[i] because integer i will not be valid outside this loop so we copy the elemnt to a global variable p and return it
        }
    }
    return p ;  // Here we are returning the value that we set outside the loop to avoid any exception and avoid any errors regarding return statement outside scope or no return ststement error 
}

int max(struct Array arr  ){
    int max=arr.A[0]; // we are initialising max to the first element of the array to be maximum value then comparing all the way towards the end of the array
    for ( int i=0 ; i<=arr.length; i++)  /// int i must be initialised to 0 for loop to traverse from index 0 to the last index of the array
        {
            if (arr.A[i]>max){ 
                max=arr.A[i];
            }
        }
        return max;  // we are returning max outside the loop to avoid any exception and avoid any errors regarding return statement outside scope or no return ststement error
}
 
 int main (){
    struct Array arr1 = {{2,4,6,7,9,5},6};  /// we have specified 6 as the length of the array 
    cout<<"The element at index  is "<<get(arr1,4)<<endl;
    cout<<"The new element at index is "<<set(arr1,4,10)<<endl;
    cout<<"The max element in the array is "<<max(arr1)<<endl;
 }