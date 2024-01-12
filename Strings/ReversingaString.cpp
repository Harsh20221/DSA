#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){ 
    int i=0; 
    int j=0;
    char A[]={"Hello"};            
    int n=strlen(A);
    char B[n];
    for (j=0, i=strlen(A)-1; i>=0; i--, j++){    //? i=strlen(A)-1 is the last element of the array
        B[j]=A[i];                               //? i>=0 is the first element of the array
    }                      ///? The way this code works is , J is the index of mew Array B and it starts from 0 while i is the index of A and it starts from the last element of A and goes to the first element of A while j goes from 0 to the last element of B
    ///* Hence when we run this code the last element of Array A is stored in the first INDEX  of Array B and so on and so forth
    B[j]='\0'; //? This is to add the null character at the end of the array
    for (i=0; i<strlen(A); i++){ //? This is to print the array
        cout<<B[i];
    } 
    cout<<endl;
    cout<<strlen(A)<<endl;//? This is to print the length of the array
}