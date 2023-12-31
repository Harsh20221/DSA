#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int a=10;
   int &r=a;   /// This is how you initialise a referance variable and the referance becomes the integer itself
r=55;  /// changing r changes a
    cout<<r<<endl; // This is how you print a referance variable

}