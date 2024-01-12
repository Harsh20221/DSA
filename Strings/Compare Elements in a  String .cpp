#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std; //? This code is checking which string is greater or less than the other string

int main(){ 
    char A[]={"Tokyo"};
    char B[]={"Maryjane"};
    int i,j;
    for ( i=0 , j=0 ; A[i]!='\0' ,B[j]!='\0'; i++,j++){
     if(A[i]!=B[j])
     break;  }   //? This loop is checking if the strings are equal or not
     //?It terminates on the exact index where the strings are not equal
     if (A[i]==B[j]){ //? After this terminates then that index is checked if the strings are equal or not
        cout<<"The strings are equal"<<endl;}
        else if (A[i]>B[j]){ //? If the strings are not equal then this condition is checked
            cout<<"The first string is greater than the second string"<<endl;
        }
        else if (A[i]<B[j]){  //? If the strings are not equal then this condition is checked
            cout<<"The first string is less than the second string"<<endl;
        }
    


}