#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std ;
struct node {
    int data ;
    struct node *next ;
}*first;
void  removeduplicates(struct node *p){
    struct node *q;   

p=first;
q=first->next; //? This is the node that will be compared to the node p
while(q!=NULL){
    if ( p->data!=q->data){
        p=q;
        q=q->next;
    }
    else {
        p->next=q->next;     
        delete q;
        q=p->next;    
    }
}  //! Make sure to add a return statemenet here if you're defining it as an integer function 
}
void create(int A[], int n )
{
  struct node *last;
  struct node *t;
first= new node ;
first->data=A[0];
first->next=NULL;
last=first;
for(int i=1 ; i<n ; i++){
t=new node ;
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
int main(){
    int A[]={3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    create(A,16);
    removeduplicates(first);
    display(first);
    return 0;
}



