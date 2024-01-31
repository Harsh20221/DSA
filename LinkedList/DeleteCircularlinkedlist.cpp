#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node {
    int data ;
    struct node *next;

}*head=NULL;

void create ( int A[], int n ){
 struct node *last;
 struct node *t;
 head = new node ;
 head->data=A[0];
head->next=head;  //!  This is the only code  that will be changed while making a circular linked list , in the classic linear linked list the head->next will point towards null but here it'll point towards the head itself
last=head;
for ( int i=1 ; i <n ; i++){
t=new node ;
t->data = A[i]; //? here we are storing the data in the node
t->next=last->next; //! Also here there is going to be a change where the next element of last will point towards t but in classical t->next will be Null 
last->next=t;
last=t;

}
}


int Delete (struct node *p , int pos ){  
    int x;
    struct node *q;
if (pos==1){ 
  while ( p->next!=head){  //? here we are moving p through the last of the list and making it point towards one node before head 
    p=p->next;
  }
x=head->data;
if(p==head){  //? if there is only one node in the list then we will delete the head and make it point towards null
  delete(head);
  head=NULL;
}
else 

p->next=head->next;  //? here we are making the last node point towards the second node of the list and then deleting the head
delete(head);
head=p->next; //? here we are making the head point towards the second node of the list because head is now deleted
     }

else {for( int i=0; i<pos-2; i++){
p=p->next; //? here we are moving p to the node before the node to be deleted
} 
q=p->next; //! here do not write q->next=p->next  
//? here we are making q point towards the node to be deleted
p->next=q->next;  //? here we are making the node before the node to be deleted point towards the node after the node to be deleted
x=q->data; //? here we are storing the data of the node to be deleted in x
delete(q);}
return x; //? here we are returning the data of the node to be deleted
}

void display(struct node *p ){
do {
    cout<<p->data<<" ";
    p=p->next;
}while(p!=head);
}


int main(){
int A[]={1,2,3,4,5};
create(A,5);
Delete(head,2); //! Do not give position as 0 or the code will not work 
display(head);

}
