#include <iostream>
#include <stdio.h> // !NOTE -- THIS IS AN EXAMPLE CODE WHICH MEANS IT IS NOT NATIVELY WRITTEN BY ME  , I HAVE TAKEN THIS CODE FROM THE INTERNET AND MODIFIED IT TO MY NEEDS
#include <stdlib.h>
using namespace std;
struct  Array
{
    int A[10];
    int length;
};
struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = new struct Array;

    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
            
        }
        else
                arr3->A[k++]=arr2->A[j++];
        
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr1->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->length=10;
    
    return arr3;
        
}


int main()
{
    struct Array arr1={{2,6,10,15,25},5};
    struct Array arr2={{3,4,7,18,20},5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    for(int i=0;i<arr3->length;i++)
        cout<<arr3->A[i]<<" ";
    return 0;
}