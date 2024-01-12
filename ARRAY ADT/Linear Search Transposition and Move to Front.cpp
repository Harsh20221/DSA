#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
  int A[10];
  int size;
  int length;
};
int linearsearchTransposition( struct Array *arr , int key){
    for ( int i = 0 ; i<arr->length ; i++){
        if ( arr->A[i]==key){
          arr->A[i]=arr->A[i-1] ;// Transposition //? Here we are swapping the element at index i with the element at index i-1 till we reach our desired element 
          //! We are increasing the index here 
       cout << "Found the Number " << key << " at index:------- " << i; }
    }
    return -1;}

    int LinearSearchMoveToFront(struct Array *arr , int key){  //! Here we are moving the element to the front of the array once we find the desired element 
        for ( int i = 0 ; i<arr->length ; i++){
            if ( arr->A[i]==key){
                arr->A[0]=arr->A[i] ; // Move to Front  
                cout << "Found the Number " << key << " at index:------- " << i;
            }
        }
        return -1;
    }
int main(struct Array arr1){  // the array name is diffrent because we are creating a new array to test the functions 
    struct Array arr = {{2,4,6,7,9,5},10,6};
    cout << "Enter the key to be searched:";
    cin >> arr1.A[10];
    linearsearchTransposition(&arr1, 9);
    LinearSearchMoveToFront(&arr1, 9);
    return 0;

}
