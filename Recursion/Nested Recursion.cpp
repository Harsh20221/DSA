#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int  fun (int n){
    if (n>100){
        return n-10;
    }
    else {
        return fun(fun(n+11));   
    }
}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    fun(x);
    cout<<fun(x);
    return 0;
}
