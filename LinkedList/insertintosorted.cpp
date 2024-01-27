#include <iostream >
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next;

}*first=NULL; ///! Important to assign first = Null or else it will give errors 

void insertatsorted(struct node *p,int x){
struct node *t; struct node *q;
t=new node ;
t->data=x;
t->next=NULL;
if(first==NULL){   ///! Very important to write this condition or else the loop will run infinately 
    first=t;
}
else {
while (p!=NULL&&p->data<x){  //! Very important to also write the condition of p!=NULLor else it will give segmentation fault
    q=p;
    p=p->next;
}
if(p==first){
    t->next=first;  //? this ine is inserting the node t before the first node in the list 
    first=t;    //?When a new node is inserted at the beginning of the list, `first` needs to be updated to point to this new node, which is the purpose of `first=t;`.
}

else {
t->next=q->next; //? This ine is inserting the node t after the node q in the list
q->next=t; //? This ine is inserting the node q before the node t in the list
}
}}
void create(int A[], int n ){
  struct node *last;
  struct node *t;
first= new node ;
first->data=A[0];
first->next=NULL;  ///?                     The line `first->next=NULL;` is setting the `next` pointer of the first node in the list to `NULL`. In a linked list, the `next` pointer of a node points to the next node in the list. When `next` is `NULL`, it signifies that there are no more nodes in the list, i.e., this node is the last node in the list. Since we're initializing the list with a single node, this node is both the first and the last node in the list, so its `next` pointer is set to `NULL`.
last=first;
//?The line `last=first;` is setting the `last` pointer to point to the same node as the `first` pointer. In a linked list, `first` and `last` are often used to keep track of the first and last nodes in the list, respectively. Since we're initializing the list with a single node, this node is both the first and the last node in the list, so both `first` and `last` are set to point to this node.


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
    int A[]={2,3,4,5,6};
    create(A,5);
    insertatsorted(first,7);
    display(first);
}





