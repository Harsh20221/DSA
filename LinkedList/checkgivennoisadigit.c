#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    int i, len, flag=0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("The given string contains a digit\n");
    }
    else{
        printf("The given string does not contain a digit\n");
    }
    return 0;
}