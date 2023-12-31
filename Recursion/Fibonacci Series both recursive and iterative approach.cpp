#include<iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
int FibRec(int n){
    if (n<=1)
    return n;
    return FibRec(n-1)+FibRec(n-2);
}

int FibLoop(int n){
    int i;
    int s;
    int t1=1;
    int t0=0;
if(n==0)
return n;
for(i=2;i<=n;i++)
s=t0+t1;
t0=t1;
t1=s;
return s;
}

//int main(){
   // int n;
  //  printf("Enter the term of the series whose Value to be found : ");
  //  scanf("%d",&n);
   // cout<<"The Value of the "<<n<<"th term of the series is : "<<FibRec(n)<<endl;
  //  return 0;
//}

int main2(){
    int n;
    printf("Enter the term of the series whose Value to be found : ");
    scanf("%d",&n);
    cout<<"The Value of the "<<n<<"th term of the series is : "<<FibRec(n)<<endl;
    return 0;

}