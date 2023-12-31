#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int swap(int &x, int &y)
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

}