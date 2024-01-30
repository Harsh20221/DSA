#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
int data;
struct node *next;
}*first=NULL,*second=NULL,*third;  //! Make sure to assign first , second and third beforehand 

int count(struct node *p){
    int c=0;
while (p!=NULL){
c++;
p=p->next;
}
return c ;
}


void create1(int A[], int n ){
struct node *t; struct node *last;
first=new node ;
first->data=A[0];
first->next=NULL;
last=first;
for (int i=1 ; i<n;i++){
t=new node;
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}

void create2(int B[],int n){
    struct node *t;
    struct node *last;
second=new node ;
second->data=B[0];
second->next=NULL;
last=second;
for ( int i=1; i<n ;i++){
    t=new node ;
    t->data=B[i];
    t->next = NULL;
  last->next=t;
  last=t;
}

}
void display(struct node *p){
    while (p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }

    
}






 void concatinate(struct node *p,struct node*q){
    third=p;
    while (p->next!=NULL){ ///! Make sure to give the condition as p->next !=NUll , do not give p!=NULL as the condition 
        p=p->next;  
    }
    p->next=q;
} 


 void merge(struct node *p , struct node *q){
 struct node *last;  ///!!!!!!! Very important not to  assign first , second or third node  again locally here or else it will not work , do not assign struct node *third here 
if ( p->data<q->data){
third=last=p;
p=p->next;
third->next=NULL;
}

else {
 third=last=q;
 q=q->next;
 third->next=NULL;
}

while (p!=NULL && q!=NULL){
if ( p->data<q->data){
last->next=p;
last=p;
p=p->next;
last->next=NULL;

}
else {

    last->next=q;
    last=q;
    q=q->next;
    last->next=NULL;
}


}
if(p!=NULL){
    last->next=p;
   
}
 if (q!=NULL){
last->next=q;

}

}





int main (){
int A[]={3,5,7,10,15};
int B[]={2,4,6,8,9};
create1(A,5);
create2(B,5);
concatinate(first,second); ///! If you call concatinate before merge then the output will be a onfinite loop  ,!!!!!!!Call Merge and concatinate seperately 
///merge(first,second);
display(third);
}

