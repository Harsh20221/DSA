#include <iostream >
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next; 
}*first;

void create (int A[], int n ){
struct node *t;
struct node *last;
first = new node ;
first->data=A[0];
first->next=NULL;
last=first;
for ( int i = 1 ; i <n ; i++){  //? Here loop will start from 1 always because we have already assigned the element at 0 index using first node 
t=new node ;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}



void reverselinkedlist(struct node *p){
  int B[100]; int i=0;  //! Here you have to give the size of array as something definite  or else it will give segmentation fault
  p=first;
  while(p!=NULL){
   B[i]=p->data;
   p=p->next;
   i++;
  }
 i--; //! DO NOT FORGET TO DECREMENT i HERE OR ELSE THE ITERATOR WILL NOT PROPERLY ALIGN WITH THE ARRAY BECAUSE IN THE PREVIOUS LOOP THE ITERATOR CROSSES THE ARRAY SO WE NEED IT TO GET BACK AT THE LAST POSITION IN THE ARRAY TO REVERSE IT FROM HERE 
  p=first;
  while(p!=NULL){
    p->data=B[i];
    p=p->next;
    i--;
  }

}

void display(struct node *p){
while (p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
}
}       

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    cout<<"The List before reverse is\n";
    display(first);
    cout<<endl;
    reverselinkedlist(first);
    display(first);
    return 0;
}
