    #include <iostream>
    #include <stdlib.h>
    #include <stdio.h>
    void swap(int &x,int &y){ ///! Make sure to pass the reference of the variable to swap the values
        int temp=x;
        x=y;
        y=temp;
    }

void selectionsort(int A[], int n ){
    int j ; int k;
    for (int i=0; i<n-1;i++){
   
    for( j=k=i; j<n;j++){
        if (A[j]<A[k]){
            k=j;
        }
       
    }
 swap(A[i],A[k]); ///! Swap the smallest element with the first element , Swap with k not j because k is the index of the smallest element and j is the index of the last element
    }

}

int main(){
    int A[]={2,3,4,8,6,7,3,9,1};
    int n=9;
    selectionsort(A,n);
    for(int i=0;i<n;i++){
        std::cout<<A[i]<<" ";
    }
    return 0;
    
}