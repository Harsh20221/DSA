#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main (){
   ///int  Arr[6]={2,4,6,8,10,12}; 
            int *p; ///? We are creating a pointer variable p
        //  p=(int*) malloc(6*sizeof(int));   ///? This is how you create an array in heap memory using malloc function while using C language 
    /// p[0]=2;p[1]=4;p[2]=6;p[3]=8;p[4]=10;p[5]=12; /// ?This is how you assign values to an array in heap memory 
    //    for(int i=0;i<6;i++){
        //      cout<<Arr[i]<<endl;  //? we write i inside arr because we want to print the value of the array
         // } //                                                                                          
              p= new int[6]; //? This is how you create an array in heap memory using new function while using C++ language}  
     p[0]=2;p[1]=4;p[2]=6;p[3]=8;p[4]=10;p[5]=12;
     for(int i=0;i<6;i++){
             cout<<p[i]<<endl;
             }
     delete []p; // ?This is how you free the memory when the work is done // necessary when writing large programs 
 return 0;
} ///* sometimes the code will give an error as it'll fail to recognise this bracket hence please be sure to put this bracket in the end of the code and wait till it recognises it or run the code on Replit
