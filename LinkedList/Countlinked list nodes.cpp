#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first;
int create(int A[], int n) { 
    int i=0;
    struct node *last ;
    struct node *r;
   first=new node; 
first->data=A[i];
first->next=NULL;
last=first;
for (i=1 ; i<n;i++){
   r=new node;
   r->data=A[i];
   r->next=NULL;
   last->next=r;
   last=r;
}






}