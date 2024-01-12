#include <iostream>
#include<stdlib.h>
#include<stdio.h>
int main (){
    char A[10]={'D','U','A','L','I','P','A'};
    int i;
    for ( i=0 ; A[i]!='\0' ; i++ ){}
    printf(" Length of String is: %d", i);  //! Please write %d where you want your output , if you write it before the statement length of string then length will be displayed before 
    //! Also  write this print f sttement outside this for loop to not repeat the length 
    return 0;
}