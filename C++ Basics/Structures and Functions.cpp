#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct rentabgle {
    int length ;
    int breadth;
}

void initialze ( struct rectangle *r , int l ,int b ){
    r->length = l;
    r->breadth = b;

}

int area ( struct rectangle r){
    return (r.length * r.breadth);
}

void changelength(struct rectangle *r , int l){
    r->length = l;
} 