#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next;

}*first;

void create (int A[], int n ){
    struct node *last;    struct node *t; 
    first=new node;  //! Don't forget to locate memory for our first node 
    first->data=A[0];
    first->next=NULL;  //? we are asigning first's next as null 
   last=first;  //? Here we are making our first element as last element 

   for ( int i ; i<n; i++){
    t=new node ;
  t->data=A[i];
  t->next=NULL;
  last->next=t; //? we are doing  this step here because in the earlier steps in the insert function we made our first element as last element and now we have to link the new element with the last element (first element ) so we link the new node with last element 
  last=t; // ?here we are making our new element as last element 
   }
}


int  count(struct node *p){
    int count =0;
    while (p!=NULL){
    count ++;
    }
    return count ;
}

int Delete (struct node *p, int index ){
int x=-1; //? This the variable where we are going to store the deleted element 
struct node *q;  //? This is the node that we'll use to delete the elements 
    if(index<0||index>count(p)){
        return -1;
    }
    else if (index==1){
    q=first;  //? Here q is pointing to the first element 
        ////******* NOTE -- in the previous step both q and first are simoultanously pointing on the first node so we can even write x=q->data in the next step and it won't be wrong 
    x=first->data;

    }

}




