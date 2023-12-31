#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 int fact(int m,int n ){  // m is the base and n is the power
    if (n==0)
    return 1;
    return (fact(m,n-1)*m);
 }
int Ifact(int m,int n){
      if (n==0){
    return 1;}
    else if (n%2==0)
    {
        return (Ifact(m*m,n/2)); /// The condition here is different from the one in recursive method , Here instead of multiplyaing the base with base then multiplying with (power -1)  , we are multiplying the base with itself and dividing the power by 2
    }
    else
    {
        return (m*Ifact(m*m,(n-1)/2));
    
    }}



 //int main(){
   //     int x=0;
   //     int y=0;
   //     printf("Enter the base: ");
    //    scanf("%d",&x);
    //    printf("Enter the power: ");
    //    scanf("%d",&y);
    //    printf("The exponent is: %d",fact(x,y));
   //     return 0;
 //}

 int main2(){
    int x=0;
    int y=0;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);  /// We use scanf like this to scan printed values 
    printf("The exponent is: %d",Ifact(x,y));
    return 0; 

 }