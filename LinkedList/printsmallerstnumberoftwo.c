#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if(a < b){
        printf("%d is smaller than %d\n", a, b);
    }
    else{
        printf("%d is smaller than %d\n", b, a);
    }
    return 0;
}