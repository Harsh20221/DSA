#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first;

void create (int A[], int n ){
    struct node *last;struct node *t;
first = new node ;
first->data=A[0];
first->next=NULL;
last = first ;
for ( int i=1 ; i<n ; i++){
t=new node;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}


int checkforloop(struct node *f){  //? by f we mean first 
struct node *p ; struct node *q ; 
p=q=f;
do {
    p=p->next;
    q=q->next;
    q=q?q->next:q; ///? here we are checking if q is not null and if it is not null then we are moving it further and if it is null then we are not moving it further

} while (p && q && p!=q);  //? here we are checking if p and q are not null and if they are not null then we are checking if p and q are not equal to each other and if they are not equal to each other then we are moving further

if (p==q){
    return 1;
}
else {
    return 0;
}
}





int main (){
    int A[]={2,3,4,5,6};
    create(A,5);
    struct node *t1,*t2;
    t1=first->next->next;    //?1. `t1=first->next->next;`: This line is setting `t1` to point to the second node in the linked list. `first` is typically a pointer to the first node in the list, so `first->next` gets the second node, and `first->next->next` gets the third node.`t2=first->next->next->next->next;`: This line is setting `t2` to point to the fourth node in the linked list. It's similar to the previous line, but it goes two nodes further. `t2->next=t1;`: This line is creating a loop in the list by setting the `next` pointer of the node pointed to by `t2` to the node pointed to by `t1`. This means that after reaching the node pointed to by `t2`, the next node in the sequence will be the node pointed to by `t1`, creating a loop.
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<checkforloop(first);





}