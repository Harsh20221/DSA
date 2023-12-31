#include<iostream>
#include<stdio.h>   //// This is a Demo of Call By address 
#include<stdlib.h> 
 using namespace std;
void fun(int A[], int n){        //////  This function will create errors if it's not void 
int B[5]={};
for(int i=0;i<n;i++)
cout<<A[i]<<endl;  
cout<<A<<endl; //// Writing this statement will not print elements of  A as A is a pointer 
}
int main(){
    int A[]={1,2,3,4,5};
    int n=5;
fun(A,n);     //// Please Do not write outputststement here in this loop or  or it'll not get executed 
}