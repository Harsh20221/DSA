#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int sum (int n){
    if (n==0)
        return 0;
        return sum(n-1)+n;    /////// We are using Recursion here 
}

int Isum(int n ){
    int s=0;
    int i;
    for( i=1;i<=n; i++)
       s=s+i;
    return s;
}
int main(){
    int x=5;
    printf("The Sum Using Recursion is: %d",sum(x));  
    printf("\n The Sum Using Iterative approach is: %d",Isum(x));
    return 0;

}


    