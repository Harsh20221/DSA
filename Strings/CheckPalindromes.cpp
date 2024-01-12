#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
   char A[]= {"Lover"};
    char B[]={"Madam"};
    char C[strlen(A) + 1]; // !Change the data type of C to char[] and initialize it with the correct size , We are writing the length of C as Strler(A)+1 because we need to store the null character at the end of the string
    int i,j;
    for(i=0,j=strlen(A)-1;i<strlen(A)-1; i++,j--){  //! Make Sure to Correctly  specify the loop condition like this or program will not run , make sure i starts from 0 and continues till string length while j starts from string lenght and continues till 0 , also incriment i and decriment j
        C[i]=A[j]; 
    }
    for(i=0;i<=strlen(A)-1;i++){
        if(C[i]!=B[i]){ 
            cout<<"The string is not a palindrome"<<endl;
            break;
        }
        else if(C[i]==B[i]){
            cout<<"The string is a palindrome"<<endl;
            break;
        }
    }
}