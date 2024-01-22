#include <iostream>
#include <stdlib.h>

using namespace std;

int s[100] = {};
int size = 100; // Initialize size with a value
int top = -1;

void push(int x) {
    int size = 100;
    if (top == size - 1) {
        cout << "The Stack is Full" << endl;
    }
    else {
            top++;
            s[top] = x;
        }
    }


void pop() {
    int x = -1;
    if (top == -1) {
        cout << "The Stack is Empty" << endl;
    }
    else {
        x = s[top];
        top--;
        cout << "The popped element is " << x << endl;
    }
}

void Display() {
    if (top == -1) {
        cout << "Stack Is Empty, there are no elements to print" << endl;
    }
    for (int i = top; i >= 0; i--) {
        cout << s[i] << endl;
    }
}

int main() {
    int size;
    int x ;
    cout << "Enter the size of the Stack:" << endl;
    cin >> size;
    top = -1;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element to be pushed" << endl;
        cin >> x;
        push(x);
    }
    pop();
    Display();
}