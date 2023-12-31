#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int Add(int a, int b){
    int c=a+b;
    return(c);

}
int main(){
    int x=10;
    int y=8;
    int z=Add(x,y);
    printf("The sum of X and y is:%d",z);
}