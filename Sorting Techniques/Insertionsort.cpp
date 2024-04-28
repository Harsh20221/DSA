#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void swap(int &x,int &y){ ///! Make sure to pass the reference of the variable to swap the values
    int temp=x;
    x=y;
    y=temp;
}
void Insertionsort(int A[], int n ){

for ( int i=1; i<n;i++){
    int j=i-1;
   int x=A[i];
 while(j!=-1 && A[j]>x){
    swap(A[j+1],A[j]);
    j--;

 }
A[j+1]=x;
}
}

int main (){
    int A[]={2,3,4,8,6,7,3,9,1};
    int n=9;
    Insertionsort(A,n);
    for(int i=0;i<n;i++){
        std::cout<<A[i]<<" ";
    }
    return 0;
}