#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
class Rectangle {
    public:
    int length; // Forward declaration of struct Rectangle
    int breadth;
    void initilise( int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }
};

int main(){
    Rectangle r; 
    int l , b;         
    r.initilise(1,5);
    cout<<r.area();
    return 0;
}

