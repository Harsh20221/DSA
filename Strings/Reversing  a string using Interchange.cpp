#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
    char A[]={"DUA LIPA"};
    int i=0 ; int j = strlen(A)-1; 
    char temp; //! Very important to assign temp as character and not as integer
    for(i=0 , j=strlen(A)-1 ; i<j ; i++ , j--){ // !! Use for Loop here and not while loop // Mke sure to write the j staring point as strlen A -1 and not strlen A
    //! Remember to incriment i and decriment j at the same time
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
for (i=0; i<strlen(A); i++){ //? This is to print the array
        cout<<A[i];
    }
    return 0;
}