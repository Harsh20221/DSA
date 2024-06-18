#include <iostream>
#include <stdio.h>   
#include <stdlib.h>
using namespace std;
struct  Array
{
    int A[10];
    int length;
};
struct Array *MerginganArray(struct Array *arr, struct Array *arr1, int n) { ///!! We are using struct Array *arr and struct Array *arr1 because we want to return the array arr3 and not the integer value
    int i = 0;
    int j = 0;
    int k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j< arr1->length) {
        if (arr->A[i] < arr1->A[j]) {
            arr3->A[k++] = arr->A[i++];
        }
        else {
            arr3->A[k++] = arr1->A[j++];  //!! We are using k++ because we want to increment the index of the array arr3->A[k++] and not the index of the array arr1->A[j++]`
        } 
    }

    for (; i < arr->length;  i++)   //!! The two for loops will be outside the while loop because we have to copy the remaining elements of the array which are not copied in the while loop
        arr3->A[k++] = arr->A[i];
    for (; j < arr1->length; j++) 
        arr3->A[k++] = arr1->A[j];
arr3->length = arr->length + arr1->length;
 /////   return arr3;
return arr3;}  //! BEWARE !!!!!!!!! It is important to return  arr3 not 0 or anything or else we will not be able to display the array using display function or for loop , It will give us a segmentation error 
int main(){
    struct Array arr1={{2,6,10,15,25},5};
    struct Array arr2={{3,4,7,18,20},5};
    struct Array *arr4;
    arr4 = MerginganArray(&arr1, &arr2, 5);
    for(int i=0;i<arr4->length;i++)
        cout<<arr4->A[i]<<" "; ///!! We are udisplaying the elements here 
    return 0;
}
