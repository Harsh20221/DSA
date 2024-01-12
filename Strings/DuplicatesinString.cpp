#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){ 
    char str[]="Dualipa";  //? This is how you declare an array of characters in C++
    int h[26]={}; //? This is how you declare a hash table in C++
for(int i=0 ; str[i]!='\0';i++){
    h[str[i]-97]+=1; //* HERE WHAT WE ARE DOING IS WE ARE SUBTRACTING 97 FROM THE ASCII VALUE //   h[str[i]-97]+=1; This line is incrementing the value of the index of the hash table by 1 . This is how the program keeps count of the occurances of each character in the string
}
for (int i = 0; i < 26; i++)
{
    if(h[i]>1){  //? Here we are checking if the value of the index of the hash table is greater than 1 , if it is greater than 1 then it means that the character has occured more than once in the string
        printf("This Character:%c has occoured ",i+97); //* This line is printing the character 
      printf("%d times\n ",h[i]); //* This line is printing the number of times the character has occured in the string 
      //! Make sure to use %c for printing characters and %d for printing integers , in the above line make sure you use %d for printing the number of times the character has occured in the string
    }                   

}
return 0;
}
