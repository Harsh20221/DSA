#include <iostream>
#include <stdlib.h> //* An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
#include <stdio.h>
using namespace std;
int main(){
    char A[]="Aloeha";
    char B[]="elolH";
    int i=0;
    int H[26]={0};//? Here we are creating a hash table of 26 elements and initializing all the elements to 0
    for ( i; A[i]!='\0';i++){
        H[A[i]-97]+=1; //? Here we are incrementing 1 in hash table for every element of A
    }
    for ( i=0; B[i]!='\0'; i++) { 
    H[B[i]-97]-=1;//? Here we are decrementing 1 from hash table for every element of B
     if(H[B[i]-97]<0){   //? Here we are checking if value of any element of hash table is less than 0 or not if it is less than 0 then it is not an anagram as it means that the element is present in B but not in A because we are decrementing the value of hash table for every element of B
         cout<<"Not Anagram";      }
else {
H[B[i]]!='\0';      //! Make sure you don't  write H[B[i]-97] HERE because here we are not comparing till the last element of the array  till the null character
//? Here we are  checking through the entire hash table till the end , and if every element of hash table is 0 then it is an anagram
cout<<"Anagram";}  }}