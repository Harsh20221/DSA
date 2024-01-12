#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
    int A[10];
    int length; 
};
void  display(struct Array arr){   //? Display Function to display the elements of the array
    int i;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<"     ";
}

struct Array *Union(struct Array *arr , struct Array *arr1){
    int i=0; //? we are merging 2 sorted arrays 
    int j=0; //? This Function will print elements that are present in both the arrays with duplicates
    int k=0;
    struct Array *arr3=new Array;
    while(i<j || j<i){
        
        if(i<arr->A[i]<arr1->A[j]){
            arr3->A[k++]=arr->A[i++];
        }
        else if (arr->A[i]>arr1->A[j]){
            arr3->A[k++]=arr1->A[j++];
        }
        else {
            arr3->A[k++]=arr->A[i++];
            j++;
        }
    }
    for(;i<arr->length;i++)   //? This for loop will copy the rest of the elements from the array which is not completely traversed
        arr3->A[k++]=arr->A[i];
    for(;j<arr1->length;j++) //? This for loop will copy the rest of the elements from the array which is not completely traversed
        arr3->A[k++]=arr1->A[j]; 
    arr3->length=k;
    return arr3;
}
struct Array *differance(struct Array *arr , struct Array *arr2){ //? Function to find the differance of 2 arrays , This function will print only the element in the first array which are not present in the second array
    int i,k,j;
    i=j=k=0;
    struct Array *arr3=new Array;
    while (i<arr->length && j<arr2->length){  //! Make sure to write the condition of while loop as i<arr->length && j<arr2->length 
        if(arr->A[i]<arr2->A[j]){
            arr3->A[k++]=arr->A[i++];
        }
        else if (arr->A[i]>arr2->A[j]){
           j++;
        }
        else { 
            i++;
            j++;
        }
    }
    for(;i<arr->length;i++) //? This for loop will copy the rest of the elements from the first Array only if the second array is completely traversed
        arr3->A[k++]=arr->A[i];
    arr3->length=k; //! Very Important to specify the length of the array 3 before returning it or else it will not return any value and will give error
    return arr3;
}


struct Array *Intersection(struct Array *arr4 , struct Array *arr5){
    //? We will use the concept of merging 2 sorted arrays to find the intersection of 2 arrays
int i=0;  //? This Function will print the elements which are common in both the arrays
int j=0;
int k=0;
struct Array *arr3=new Array;
while(i<arr4->length && j<arr5->length){
    if ( arr4->A[i]<arr5->A[j]){
        i++;  // ? We are incrementing the value of i  because we are comparing every element of first array with every element of second array
    }
    else if (arr4->A[i]>arr5->A[j]){
        j++;
    }
    else { arr4->A[i]==arr5->A[j];
        arr3->A[k++]=arr4->A[i++];
        j++; 
    }
    arr3->length=k;  //!!!!!! Very Important !!!!!! to specify the length of Array 3 before returning it or else it will not return any value and will give error
}
//? No Need to Write the 2 for loops to copy the rest of elements from both arrays as the while loop will do it automatically because we are running the while loop till the length of both arrays
return arr3; /// !! Very Important !! to return the array 3
}


int main(){
    struct Array arr9={{2,6,10,15,25},5};
    struct Array arr10={{3,4,10,18,25},5};
    struct Array *arr14;
    arr14=Union(&arr9,&arr10);
    display(*arr14);
arr14=differance(&arr9,&arr10);
display(*arr14); //* Call by reference is used here because we are passing the address of the array to the function and not the array itself
arr14=Intersection(&arr9,&arr10);
display(*arr14);
return 0;
}

