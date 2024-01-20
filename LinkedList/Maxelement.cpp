#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <climits> // Include the necessary header file for the INT_MIN constant
using namespace std;
struct node {
    int data ;
    struct node *next;
}*first; //! Make sure to initialise this global pointer first 

void create(int A [], int n  ){
    int i;
struct node *last ; //! Always create the structs by using pointers 
struct node *r;
first=new node ;
first->data=A[0];
first->next=NULL;
last=first;
for ( i=1;i<n;i++){
    r=new node ;
    r->data=A[i];
    r->next=NULL;
    last->next=r;
    last=r;
}}

int max (struct node *p){
    int max=INT_MIN; //?This is setting maax as smallest possible integer , we want max to be as small as possible so that we can compare it with rest  of elements later  
while(p!=NULL){
    if ( p->data>max)
   max=p->data;  //?The reason there's no `else` condition for `max > p->data` is because we're only interested in finding the maximum value in the linked list. If `max` is greater than `p->data`, it means the current node's data is not larger than the current maximum, so there's no action we need to take. We only need to update `max` when we find a value that's larger than the current `max`, which is what the `if` condition `p->data > max` checks for. The `else` condition is not necessary in this case because we don't need to do anything when `p->data` is not greater than `max`.
    p=p->next;        
}
return max;
}


int maxrec(struct node *p){
int x=0;
if ( p==NULL){
    return INT_MIN;
}
x=maxrec(p->next);
 if (p->data>x){
    return p->data;
 }
 else return x ;
}

int main (){
    int A[]={2,3,4,5,6,7,8};
    create(A,7);
   cout<<maxrec(first);
    cout<<max(first);
}
