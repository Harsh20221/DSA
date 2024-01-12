#include <iostream>
#include <stdio.h>  //? In this Code Instead of using a Hashtable to store no of occurances of each character , we are using Bitwise Operators to check if the character is already present in the Hash Table or not , // If it is then we are just Switching the Bit to 1 , if it is not then we are leaving the Bit as 0 , 
//* If we move the Bit to the left then the value of the Bit will be 2 , if we move the Bit to the right then the value of the Bit will be 0.5 ,
//* If we move let's say 1 in a bit towards left then it'll move and it's previous position will be filled with 0 
#include <stdlib.h>
using namespace std;
int main(){
    int H=0 , x=0;
    char Name[]="Dualipa";
    for (int i=0 ;Name[i]!='\0'; i++){  //! MAKE SURE  TO SET THE LOOP CONDITION AS Name[i]!='\0' , if you set the loop condition as i!='\0' then it will give you an error
    x=1; //? This is the value of the first bit of the Hash Table 
    x=x<<((Name[i]-97));  //?here We are performing Binary Operation on the ASCII value of the character and shifting the bit to the left of the Binary Hash  table defined as x  , We are doing this to check if the character is already present in the Hash Table or not ,        
    if((x&H)>0){  //! Here (x&H) will be enclosed inside a bracket in if condition 
        cout<<"Duplicate ------"<<Name[i]; //? If the character is already present in the Hash Table then the value of x&H will be greater than 0 , 
        //*x&H Means we are performing AND operation on the value of x and H , if the value of x and H is greater than 0 then it means that the character is already present in the Hash Table 
    }
    else
        H=x|H; //* If the character is not  repeated in the Array and it's appearing for the first time then we will perform 'OR' operation on the value of x and H and store the value in hash table   

    }   //! Both the If and Else Statement are inside the For Loop , so that we can check each and every character of the string
}