#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

    int POINTERS{10};
    int *p; // This is how you declare a pointer , //Pointer is a variable that stores the address of another variable  // Pointers store variables in Heap memory
p=&POINTERS;  /// This is how you referance a pointer to a variable // Remember the syntax
cout<<POINTERS<<endl; // This is how you print a pointer ,  
printf("using pointers we will print the value of POINTERS VARIABLE  %d",*p); // This is how you print a pointer using printf   // Here Instead of using *p if we just typened p then it would have printed the address of the variable POINTERS
}
