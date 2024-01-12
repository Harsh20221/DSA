#include <iostream> //! NOTE -- AS OF NOW THIS CODE DOES NOT WORK , I AM STILL WORKING ON IT
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array {
  int A[10];
  int B[10];
  int length;
};
int Method1ofReversal(struct Array arr , int length ){
  int i; int j; int k;
    for(i=length-1 , j=0 ; i>=0 ;i--,j++)
      arr.B[j]=arr.A[i];  
        for (  k=0 ; k<length ; k++)
        arr.A[k]=arr.B[k];
    return arr.A[k];
    
}

int main(){
    struct Array arr1 = {{2,4,6,7,9,5},{} , 6};
    Method1ofReversal(arr1,arr1.length);
    
}