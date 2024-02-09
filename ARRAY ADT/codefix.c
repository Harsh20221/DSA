#include <stdio.h>
int main(){
    int a[10],size,i,pos,num;
    printf("enetr the value of num:");
    scanf("%d",&num);
    printf("enetr the value of pos:");
    scanf("%d",&pos);
    printf("enetr the size of array:");
    scanf("%d",&size);

    printf("enter the elements of array:");
    for( i =0;i<size;i++){
        scanf("%d",&a[i]);
    }
    if(pos<=0||pos>size+1){
        printf("invalid position");
    }
    else{
        for(i=size-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
    }
    printf("the values of array are :");
    for( i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}