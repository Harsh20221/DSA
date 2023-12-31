#include <stdio.h>

void print_greeting(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    print_greeting(name);

    return 0;
}