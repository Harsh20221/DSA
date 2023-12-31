#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 void  fun(int n){  /// This Function is strictly written with void or else an exception will be thrown
    if (n>0)
    {
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int x=3;
    fun(x);
    return 0;
}
