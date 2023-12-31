#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;
    
    public: 
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    
    int Area() {
        return length * breadth;
    }
    
    int Parameter() {
        return 2 * (length + breadth);
    }
    
    void setLength(int l) {
        length = l;
    }
    
    void setBreadth(int b) {
        breadth = b;
    }
    
    int getLength() {
        return length;
    }
    
    int getBreadth() {
        return breadth;
    }
};

int main() {
    Rectangle r(10, 20);
    cout << r.Area() << endl;
    cout << r.Parameter() << endl;
    return 0;
}
