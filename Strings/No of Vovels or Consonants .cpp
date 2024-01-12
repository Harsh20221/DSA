#include <iostream>
#include<stdlib.h>  ///* NOTE-- ALTHOUGH THIS CODE WORKS BUT AS OF NOW IT CAN ONLY RUN ON VS CODE AND FAILS TO RUN ON ANOTHER IDE 
#include<stdio.h>
using namespace std;
int main(){
    char A[]={'D','U','A','L','I','P','A'};
    int Vcount = 0;
    int Ccount = 0;
    for(int i=0 ; A[i]!='\0';i++){
        if( A[i]=='A'|| A[i]=='E'|| A[i]=='I'||  A[i]=='O'||A[i]=='U'){ //!!!!!! Very Important to initalise them like this only and not any other way and make sure to use == instead of = as == is equality operator while = is assignment operator 
            Vcount++;
        }
        else if(A[i]>=65 && A[i]<=90||A[i]>=97 && A[i]<=122){
            Ccount++;
        }
    }
    printf("Vowel count: %d\n", Vcount);
    printf("Consonant count: %d\n", Ccount);
    return 0;
}
