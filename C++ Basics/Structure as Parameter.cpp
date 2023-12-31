#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle {
    int length;
    int breadth;
};  /// Pllease don't forget to put a semicolon after the curly braces

void func(rectangle r){
///cout<<"Length of the rectangle is "<<r.length<<endl;
cout<<"Area Of Rectangle is:"<<r.length*r.breadth<<endl;
}
int main(){
    struct rectangle r={10,5};
    func(r);
    return 0;
}


