# include <iostream>
#include <stdlib.h>
#include <stdio.h>

void swap(int &x,int &y){ ///! Make sure to pass the reference of the variable to swap the values
    int temp=x;
    x=y;
    y=temp;
}

void Bubblesort(int A[], int n){
   int flag=0;
    for(int i=0;i<n-1;i++){
        for (int j=0 ; j<n-1-i;j++){ //! n-1-i because the last element is already sorted
            if(A[j]>A[j+1]){ 
                swap(A[j],A[j+1]);
                flag=1;
            }
        }
      
    }
}

int main (){
    int A[]={2,3,4,8,6,7,3,9,1};
    int n=9;
    Bubblesort(A,n);
    for(int i=0;i<n;i++){
        std::cout<<A[i]<<" ";
    }
    return 0;
}

