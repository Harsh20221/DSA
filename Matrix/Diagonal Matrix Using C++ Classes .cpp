#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Diagonal
{
    private:
    int *A; ///! Define the array as pointer here
    int n;

    public:   //! Do not forget to put public here and also do not enclose Public in curly braces
        Diagonal(){
            n=2;  //? we are initializing the size of array to 2 ( Minimum size of array is 2)
            A=new int [2];
        }
     Diagonal(int n ){
            this->n=n; //? we are initializing the size of array to n //? This is the formula to initialize the size of array in class and it'll be different for different types of matrix
            A=new int [n];  
     }
        ~Diagonal(){ //? we are deleting the array A from   heap memory
            delete []A;  //! Do not forget to put [] here and  make sure to put delete in small letters  and also make sure to write it as delete []A not delete A[]
            
        } 
      void  set(int i , int j , int x  ); //? we are declaring the set function here
      ////! VERY VERY VERY VERY IMPORTANT TO DEFINE  THE FUNCTION INSIDE THE CLASS AS  void set(int i , int j , int x  ) and  NOT as void   Diagonal::set(int i , int j , int x  ) because adding the word diagonal before the function name while defining it inside the class will create errors 
      
      int get(int i , int j ); //? we are declaring the get function here
      void display(); //? we are declaring the display function here   
        };
void Diagonal::set(int i , int j , int x  ){  //! Very Very Important to define the function outside the class of same type as declared in class , do not define it as int  Diagonal::set(int i , int j , int x  ) , if you have defined  it as void set(int i , int j , int x  ) inside the class // Make sure to add the word Diagonal before the function name while defining it outside the class
    if (i==j){
        A[i-1]=x; //! Make sure to write it as A[i-1] not A[i]  , This is the formula to set the value of diagonal matrix and it'll be different for different types of matrix
    }
    }
int Diagonal::get(int i , int j ){
    if (i==j){
        return A[i-1]; //! Make sure to write it as A[i-1] not A[i]
    }
    else
    return 0;
    }
void  Diagonal::display(){
    for(int i=0 ; i<n ; i++){
        for ( int j=0 ; j<n ; j++){
            if (i==j){
                cout<<A[i]<<" "; //! Make sure to write it as A[i] not A[i-1] because in get  function the indexes are passed by user and the user is expected to start the index from 1 while here we are starting the index from 0 because we are using two for loops and we are using i and j as index of array
                
            }
            else{
                cout<<"0 ";
        }

    }
cout<<"\n";
}}  ///! Make sure to put semicolon here // Also make sure to enclose the whole  class in curly braces , It means the whole definition of class is in curly braces 

int main(){  //! Do not forget to write main function
//! Make sure to  give a name to class while creating an object of class like Diagonal d here  and then call all the functions using d.function name
 
    Diagonal d(4); //? we are taking 4*4 matrix as example
    d.set(1,1,5); //? we are setting the value of 1st row 1st column as 5 
    d.set(2,2,8); //? we are setting the value of 2nd row 2nd column as 8
    d.set(3,3,9); //? we are setting the value of 3rd row 3rd column as 9
    d.set(4,4,12); //? we are setting the value of 4th row 4th column as 12
    d.get(1,1) ;    //? we are writing one  as index of martix starts from 1 
    d.display(); }