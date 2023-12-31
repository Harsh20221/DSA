#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle* p; // Declare the variable 'p'
    p=(struct rectangle*)malloc(sizeof(struct rectangle)); // This is how you create a structure in heap memory using malloc function while using C language
    p->length=15; // This is how you access the structure variable using a pointer
    p->breadth=7; // This is how you access the structure variable using a pointer
/// To make an arrow copy this arrow to your code 
    cout<<"Length of the rectangle is "<<p->length<<endl;
    cout<<"Breadth of the rectangle is "<<p->breadth<<endl;
    cout<<"Area of the Rectangle is :"<<p->length*p->breadth<<endl;
}


