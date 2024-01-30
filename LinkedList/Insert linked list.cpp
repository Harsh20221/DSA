#include <iostream>   //? this is the code for inserting a node at a given index in a linked list and it congtains all insert functions  both at the beginning and at the end
#include <stdio.h>
#include<stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next;

}*first;

int count(struct node *p){
   int c = 0;
while (p!=NULL){
    c++;
    p=p->next;
}
return c;
}


void insert(struct node *p , int index, int x ){
struct node *t;
if(index<0||index>count(p)){   //! We need count function here to get the length of linked list nodes 
    return ;
}
t=new node ;
t->data=x; //! Remember to push value of x in t's data 
if (index==0){
    t->next=first;
 first=t;

}
else{ 
for ( int i=0 ; i<index-1;i++){  //! Make sure to end the for loop for condition as index-1
//? We have this for loop as we are bringing  a new pointer  t to the index where we want to insert the node
//!Even if you have a condition for the 0 index elsewhere in your code, this loop still needs to start from 0. this is because it's not skipping the first node, but rather it's iterating over all nodes up to the node before `index`.
    p=p->next;
    t->next=p->next; //?Here t is the new node that is going to be inserted to the linked list 
p->next=t; //* p is traversing through the list and helping to insert the elements in the linked list , p is at the place where new node will be inserted after , the new node t will be inserted after p  that's why we are doing t->next=p->next and then we are pointing p to the new node t 
}

}}


void display(struct node *p){
while (p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
}

}


void create (int A[], int n){
    int i;
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for (i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}
void insertolast(struct node *p , int x){
  struct node *t ; struct node *last;
t=new node ;  //? here t is same as r that we have used in other examples 
t->data=x;
t->next=NULL;
if ( first==NULL){
    last=first=t; //? here we are assigning the address of t to the last pointer because we want to make t as the last node of the linked list

}
else  
last->next=t;   //?we are assigning the address of t to the next pointer of last node because we want to insert the node at the end of the linked list
last=t;  //? we are assigning the address of t to the last pointer because we want to make t as the last node of the linked list
}


int main(){
int A[]={2,3,4,5,6,7,8};
create(A,6);
insert(first,2,10);
insertolast(first,20);  //? Calling this will insert 20 at last and will make 20 as last element of the linked list
display(first);

}