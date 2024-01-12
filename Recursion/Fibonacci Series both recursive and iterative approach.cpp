#include<iostream> //?The Fibonacci series is the sequence where each number is the sum of the previous two numbers of the sequence. The first two numbers of the Fibonacci series are 0 and 1 and are used to generate the Fibonacci series
#include <stdlib.h>
#include<stdio.h>
using namespace std;
///int FibRec(int n){
  ///  if (n<=1)
   /// return n;
  ///  return FibRec(n-1)+FibRec(n-2);
///}

int FibLoop(int n){
    int i;
    int s;
    int t1=1;
    int t0=0;
    if(n==0)
        return t0;
    if(n==1)
        return t1;
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter the term of the series whose Value to be found :"<<endl;
    cin>>n;
    cout<<"The Value of the "<<n<<"th term of the series is : "<<FibLoop(n)<<endl;
    return 0;
}