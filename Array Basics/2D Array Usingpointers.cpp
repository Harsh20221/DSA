#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main (){
    int *A[3];  
    A[0] = (int *)malloc(4*sizeof(int)); /// Assignment using C syntax // 4*size of because array index atarts from 0 and till 3 so we will get a total of 4 elements 
    A[1] = new int [4]; /// Assignment using C++ syntax
    A[2] = new int [4];

///////////////////////////////////////////////////////////////////////////////////
    int **B; /// This is a pointer to a pointer    This is a method of creating a 2D array using pointers where every row is a pointer and every column is a pointer and everything is in Heap memory
    B = new int *[3]; /// This is a pointer to a pointer
    B[0] = new int [4]; /// This is a pointer to a pointer
    B[1] = new int [4]; /// This is a pointer to a pointer
    B[2] = new int [4]; /// This is a pointer to a pointer


}