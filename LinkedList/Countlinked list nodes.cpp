#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first;
void create(int A[], int n) { 
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
void displayrecursive(struct node *p){
    if(p!=NULL){  //! Make sure to give if condition to display function 
    cout<<p->data<<endl;
displayrecursive(p->next);}  //! Do not write p=p->next in display function 
                            ///! write p->next only 
}

void count (struct node *p ){
int c=0;
while(p!=NULL){
    c++;
    p=p->next;
}
cout<<c<<endl;   //! Do not write cout p here you need to print the count not the struct p 
}


int main (){
 int  A[]={2,3,4,5,6,7,8};
 create(A,7);
 count(first);  //! Make sure to call the count function by first as parameter 
displayrecursive(first);
}

