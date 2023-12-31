#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void fun(int n){
    if (n>0){
    fun(n-1);}  ///// This is a head recursion because the recursive call is before the print statement and the output we have here is diffrent from the output we have in tail recursion
     printf("%d ",n);
    }
int main(){
    int x=5;
    fun(x);
    return 0;
}            
