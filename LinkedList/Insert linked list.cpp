#include <iostream>   //? This is the code for inserting a node at a given index in a linked list and it congtains all insert functions  both at the beginning and at the end
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
struct node *q;
if(index<0||index>count(p)){   //! We need count function here to get the length of linked list nodes 
    return ;
}
q=new node ;
q->data=x; //! Remember to push value of x in q's data 
if (index==0){
    q->next=first;
 first=q;

}
else{ 
for ( int i=0 ; i<index-1;i++){  //! Make sure to end the for loop for condition as index-1
//? W have this for loop as we are bringing  a new pointer  q to the index where we want to insert the node
    p=p->next;
    q->next=p->next;
p->next=q;

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
void inserttolast(struct node *p , int x){
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
inserttolast(first,20);  //? Calling this will insert 20 at last and will make 20 as last element of the linked list
display(first);

}