#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main (){
    int *p ;                     ///? This is how you'll declare an array in heap memory , just create a pointer and allocate memory to it using malloc or new operator
    p=(int*)malloc(6*sizeof(int));
   p[0]=6 ; p[1]=2 ; p[2]=3 ; p[3]=4 ; p[4]=5; p[5]=9;  
    ; int key=9;
      for(int i=0 ; i<=5 ; i++){
        if(p[i]==key)
        cout<<"Found the Number "<<key<<" at index:------- "<<i;
        else
        cout<<"Not Found \n";
    }
  
    
}
