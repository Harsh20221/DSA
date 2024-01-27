#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next;

}*first=NULL;      

void create(int A[], int n ){
  struct node *last;
  struct node *t;
first=new node ;
first->data=A[0];
first->next=NULL;
last=first;
for ( int i=1 ; i<n ; i++){
    t= new node ;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}




int checkforsorted(struct node *p)
{ int x =INT_MIN;
while ( p!=NULL){
    if (p->data<x){
        return 0;}
        x=p->data;  
        p=p->next;
    
 
}return 1;}  //! write the return condition outside while loop 

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
   //// display(first);
   cout<<checkforsorted(first)<<endl; ///! in order to display return statement use cout 
}