#include <stdio.h>
int main(){
    int a[10],size,i,pos,num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    printf("Enter the value of pos:");
    scanf("%d",&pos);
    printf("Enter the size of array:");
    scanf("%d",&size);

    printf("Enter the elements of array:");
    for( i =0;i<size;i++){
        scanf("%d",&a[i]);
    }
    if(pos<0||pos>size+1){
        printf("Invalid position");
    }
    else{
        for(i=size-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }
        a[pos]=num;
        size++;
    }
    printf("The values of array are :");
    for( i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}