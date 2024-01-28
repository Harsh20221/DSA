 #include <iostream>
#include<stdlib.h>   ///! This Code converts lowercase to upercase and upercase to lower case letters in a string by increasing or decreasing it's ASCII VALUES Tthat are stored 
//* PLEASE REFER TO ASCII TABLE FOR MORE DETAILS 
#include<stdio.h>
using namespace std;    
int main(){
char Name[]="DuAlIpA";
for ( int i=0 ; Name[i]!='\0';i++) ///! Make sure to enclose i! '\0' inside single brackets , Also make sure to write Name [i]!='\0' not Just Name !='\0'
{ if(Name[i]>=65 && Name[i]<=90)    
{
 Name[i]=Name[i]+32;
}
else if(Name[i]>=97 && Name[i]<=122) {
Name[i]=Name[i]-32;  
} 
printf("%c",Name[i]); ///? We Write %c to print charecter 
}  //!! Make Sure to write like this ---Name[i] to print the Changes characters , Do not write like this -- printf("%d", Name ) -- this will not print the string 
}
