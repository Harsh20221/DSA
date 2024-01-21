#include <iostream>
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

int main(){
int A[]={2,3,4,5,6,7,8};
create(A,6);
insert(first,2,10);
display(first);

}