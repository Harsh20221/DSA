#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
  
int fun(int n){
    static int x=0;
    if(n>0){
        x++;      // x is a static variable and is not destroyed after the function call is over
     return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r=fun(5);
    printf("%d ",r);
    return 0;
}
