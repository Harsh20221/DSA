#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void func(struct rectangle *P)
{
    P->length=15;
    P->breadth=7;
cout<<"Length of the rectangle is "<<P->length<<endl;
cout<<"Breadth of the rectangle is "<<P->breadth<<endl;
cout<<"Area of the Rectangle is :"<<P->length*P->breadth<<endl;
}
int main(){
    struct rectangle r={10,5};
    func(&r);  /// Function call karne ke time pe ye referance "&" use karna padta hai
       printf("Length of the rectangle is %d\n",r.length);
    printf("Breadth of the rectangle is %d\n",r.breadth);
    printf("Area of the Rectangle is :%d\n",r.length*r.breadth);
}


///// This Program will print the length and breadth and area of the rectangle using the function call 2 times as we're getting the output on both functions 