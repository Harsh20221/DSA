#include <iostream>
#include <stdio.h>
#include <stdlib.h>    /// Example Array A=[4,12,9,15,6,10,7,2,3,8]
using namespace std;
struct Array {
    int A[10];
    int length;
};

void Method2ofReversal(struct Array& arr , int length ){      //! REMEMBER IMPORTANT VERY IMPORTANT 
                                 //! The array is passed as a reference variable to the function so that the changes made to the array in the function will be reflected in the main function // If you use call by value then it'll not work at all and will give bad results  
    int i; int j; int temp;
    for (i=0 , j=length-1 ; i<j ; i++ , j--){
        temp = arr.A[i]; //! This'll copy half of the elements of the array to temp variable , Till the index i<index j 
        arr.A[i]=arr.A[j]; // !This'll copy the other half of the elements of the array to the first half of the array , Till the index i<index j  // The array A will be like [8,3,2,7,10,6] at this step 
        arr.A[j]=temp; // !This'll copy the first half of the elements of the array to the second half of the array , Till the index i<index j now array A will be like [8,3,2,7,10,6,15,9,12,4] at this step as the array is reversed and the first 5 elements are appended at the last of the array
    }
    for (i=0 ; i<length ; i++){
        cout<<arr.A[i]<<" ";
    }
}

int main(){
    struct Array arr1={{4,12,9,15,6,10,7,2,3,8},10};
    Method2ofReversal(arr1,10);
}