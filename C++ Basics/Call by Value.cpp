#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
    void swap(int x, int y)    ///// Isko Hamesha By Value mei hi pass karna hai
                                 //// Isko Main Function ke bahar likhna hai
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    int main(){
         int a=10, b=20;
        swap(a,b);
        cout<<a<<" "<<b;
        return 0;
    }