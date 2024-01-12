#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){ 
    int space=0;
    char Name[]="Lord Krishna";  // ? The logic here is to find no of words we calculate no of spaces and always no of words is equal to No of spaces+1
    for(int i=0 ;Name[i]!='\0';i++ )
    {
        if(Name[i]==' '){  //! Make sure to write the condition as--- if (Name[i]==' ') and not like this ---  if (Name[i]=='') leaving no space btw '' will create an error 
            space++; 
        }
    }
    printf("The Number of Words Are %d",space+1);
}