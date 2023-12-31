#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int e(int x , int n ){
    static double s=1;
    if (n==0){
        return 1;
    }
    s=1+x/n*s;
    return s;  
    cout<<e(x,n-1);
}

int main(){
    int x,n;
    x=1;
    n=4;
    cout<<e(x,n);
  return 0;
}                                                           