#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array{
    int *A; ///! VERY IMP MAKE SURE TO INITIALISE THIS ARRAY AS POINTER ELSE YOU WON'T BE ABLE TO CREATE A ARRAY IN HEAP IN MAIN FUNCTION 
    int length;

}; 

int Insert(struct Array *arr, int index , int x){
    int i ;
    if (index>=0 && index <=arr->length-1 ){ //! We need to use if condition here instead of while loop because we need to check the condition only once.
        for ( i = index; i>=0; i--  ) {
            if ( arr->A[i]>x){
                arr->A[i+1]=arr->A[i];
                arr->A[i]=x;
            } 
            else if ( arr->A[i]<x){
                arr->A[i+1]=arr->A[i];
                arr->A[i]=x;
            } 
            else if ( arr->A[i]==x){
                arr->A[i]=x;
            } 
            else  {
                arr->A[i]=x;
            } 
            break;
        }
    }
    return 0;
}

void  Delete(struct Array*arr , int index ){
    int i=0;
    for ( i = index ; i<arr->length ; i++){
        arr->A[i]=arr->A[i+1];
    arr->length --;
    }
}

void Display(struct Array &arr){
    int i;
    for ( i = 0 ; i<arr.length ; i++){
        cout << arr.A[i];
    }
}

void LinearSearchMoveToFront(struct Array *arr , int key ){
    int i=0;
for (i =0 ; i<arr ->length  ; i++){
    if (arr->A[i]==key){
        arr->A[0]=arr->A[i];
      cout<<"Found The Number"<<key<<"At IndeX"<<i;
    }
} 
}

int sum(struct Array arr){
    int sum=0;
    for (int i=0 ; i<arr.length ;i++ )
        sum+=arr.A[i]; //!! Here we are adding the elements of the array  to a predefined variable called sum initialised at 0 
        return sum; //! Make sure to add a return statement in sum function 
    }



 

int main(){
       struct Array arr1;
       int length;
       //int *A;
    printf("Please Enter the length of Array That you want to Create:");
    scanf("%d",&length);
    arr1.A=(int *)malloc(length*sizeof(int));  //! Define *A in  the Struct Array to create the array in heap  else it will give errors 
    arr1.length=length; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! MOST IMPORTANT TO INITIALISE THE LENGTH OF ARR1 ELSE THE INSERT FUNCTION WILL NOT INSERT ANYTHING
    int ch;
    int x , index;
    do
    {
        printf("----MENU-----:\n");
        printf("1----Insert\n");
        printf("2----Delete\n");
        printf("3----Display\n");
        printf("4----Search\n");
        printf("5----Sum\n");
        printf("6----Exit\n");
        printf("Please Enter your Choice: ");
        scanf("%d", &ch); //! Use Call By Referance Here

        switch (ch)
        {
        case 1:
        {
            printf("Please Enter the index along with element to be inserted :");
            scanf("%d%d", &index, &x);
            Insert(&arr1, index, x);
            break; //! Very Important to Break the Cases once you are finished with all execution
        }

        case 2:
        {
            printf("Please Enter the index of the element to be deleted :");
            scanf("%d", &index);
            Delete(&arr1, index);
            break;
        }

        case 3:
        {
            printf("The Elements are : :");
            Display(arr1);
            break;
        }

        case 4:
        {
            printf("Please Enter the element to be searched :");
            scanf("%d", &x);
            LinearSearchMoveToFront(&arr1, x);
            break;
        }

        case 5:
        {    
            printf("The Sum of the Elements is %d\n:" , sum(arr1) ); //!! VERY IMPORTANT TO ENCLOSE THE Result of sum inside printf statement or else the result will not display and you will get  a blank response 
            //! IT is also very important to list %d as data type to get decimal value as result 
            break;
        }
        
        printf("Thank for using the Programme");
    }
} while(ch<6);  ////! VERY IMPORTANT TO ENCLODE THE ENTIRE SWITCH CASE INSIDE DO  AND WRITE THE WHILE STATEMENT  AFTER SWITCH CASE IS DEFINED 
return 0;
}
