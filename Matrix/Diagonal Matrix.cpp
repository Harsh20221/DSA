#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct Matrix{
    int A[10];
    int n;
};
void matrixset(struct Matrix *m,int i , int j , int x  ){ //! write struct matrix as *m not m*
if ( i==j){  //? if i==j then only we will set the value as diagonal matrix has only diagonal elements
m->A[i-1]=x; //? we are writing it as index of martix starts from 1 while in array it starts from 0
}}

int matrixget(struct Matrix *m,int i , int j ){ 
if(i==j){ //! FOR ANY OPERATION IN A MATRIX , This Comdition is must to be checked
    return m->A[i-1];}
else 
return 0;}
int matrixdisplay(struct Matrix m ){
    int i , j;
    for ( i=0 ; i<m.n ; i++){
        for ( j=0 ; j<m.n ;j++ ){
            if (i==j){
                cout<<m.A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
      }
      cout<<"\n";  //!!!!!!!!!!! VERY VERY IMPORTANT TO WRITE THIS LINE TO GET THE RESULT IN MATRIX FORM OR ELSE IT WILL BE IN LINE FORM
    }
return 0;
}

int main(){
    struct Matrix m;
    m.n=4; ///! we are taking 4*4 matrix as example
    matrixset(&m,1,1,5); //? we are setting the value of 1st row 1st column as 5
    matrixset(&m,2,2,8); //? we are setting the value of 2nd row 2nd column as 8
    matrixset(&m,3,3,9); //? we are setting the value of 3rd row 3rd column as 9
    matrixset(&m,4,4,12); //? we are setting the value of 4th row 4th column as 12

    matrixget(&m,1,1) ;                //? we are writing one  as index of martix starts from 1 while in array it starts from 0 , // We are also calling by referance using &Amplesand 
    matrixdisplay(m);//! we are displaying the matrix 

}