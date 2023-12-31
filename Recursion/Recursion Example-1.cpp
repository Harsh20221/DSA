#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;


void fun(int n){
    if (n>0){       //////// Please do not write n<0 else the loop will not execute 
    printf("%d",n);
    fun(n-1);

}}
int main(){
    int x=5;
    fun(x);
    return 0;
}