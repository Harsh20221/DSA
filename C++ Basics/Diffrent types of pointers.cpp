#include<iostream>
#include<stdio.h>       
#include<stdlib.h>
 int main(){
    struct Diffrentpointers;  /// We are creating a structure
    {
        int a;
        float b;
        char c;
    };
    
   int *p1; 
   float *p2;
    char *p3;
    struct Diffrentpointers *p4;
    printf("size of integer pointer is %d\n",sizeof(p1));
    printf("size of float pointer is %d\n",sizeof(p2));
    printf("size of character pointer is %d\n",sizeof(p3));
    printf("size of structure pointer is %d\n",sizeof(p4)); 

/////// NOTE!!! THE SIZE OF EVERY POINTER IS SAME BECAUSE EVERY POINTER STORES THE ADDRESS OF THE VARIABLE AND THE ADDRESS OF EVERY VARIABLE IS SAME//////
 }