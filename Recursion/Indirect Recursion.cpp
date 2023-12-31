#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void funB(int n);   //// his step is important to avoid fun b not declared in this scope error 
void funA(int n){
    if (n>0)
    {
        printf("%d ",n);
        funB(n-1);
    }}
void funB(int n){
    if (n>1){
        printf("%d ",n);
        funA(n/2);
    }
}
   int main (){
         int x=20;
         funA(x);
         return 0;
   }
