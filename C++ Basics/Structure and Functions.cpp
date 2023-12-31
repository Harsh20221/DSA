#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

    int main(){ int Area;
    struct Rectangle r;
    r.length=10;
    r.breadth=5;
    Area=r.length*r.breadth;
    cout<<Area;
}
int main2(){
    int Parameter;
    struct Rectangle r;
  //  r.length=10;
   // r.breadth=5;
    //P//arameter=2*(r.length+r.breadth);
    cout<<Parameter;
    return 0;
}


int perform(){
    Rectangle r= {10,5};
    int area=main(r);
    int parameter=main1(r);
}