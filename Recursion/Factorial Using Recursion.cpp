#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int fact (int n){
    if (n==0) // It is the base case , It ensures  even 0 factorial is 1 and 1 factorial is 1
    return 1;
    return fact(n-1)*n; /// Factorial of any number "n" is the factorial of (n-1)! multiplied by n 
}                              /// that's why we're recalling fact here again  

int Ifact(int n) {
    int sum = 1;  /// This is the base case  , It ensures  even 0 factorial is 1 and 1 factorial is 1 
    for (int i = 1; i <= n; i++) {
        sum = sum * i;
    }                          /// Make sure to enclose this for loop in curly braces or error will occur 
    return sum;
}

int main() {
    int x = 0;
    printf("The Factorial Using Recursion is: %d", fact(x));
    printf("\n The Factorial Using Iterative approach is: %d", Ifact(x));
    return 0;
}