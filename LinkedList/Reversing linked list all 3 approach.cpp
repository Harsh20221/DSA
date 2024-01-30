#include <iostream>  //! DO NOT WRITE  <iostream> here as < iostream > because it will not work
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


void reverselinkedlistusing3pointer(struct node *p){  //* BY DEFAULT ANY POINTER IS INITIALISED TO NULL , HENCE HERE P IS ALSO INITIALISED TO NULL 
  struct node *q=NULL;
  struct node *r=NULL;
while (p!=NULL){
r=q;  ///?In the context of the `reverselinkedlistusing3pointer` function, `r=q;` and `q=p;` are used to move three pointers (`p`, `q`, and `r`) through the linked list.
//?The line `r=q;` sets `r` to point to the same node that `q` is currently pointing to. This effectively moves `r` one step forward in the list.

//?The line `q=p;` then sets `q` to point to the same node that `p` is currently pointing to. This moves `q` one step forward in the list as well.
//?These two lines are part of a technique to reverse a linked list by iterating through it with three pointers. `p` is always the furthest ahead, pointing to the current node. `q` is one step behind `p`, pointing to the previous node, and `r` is one step behind `q`, pointing to the node before that.
//?By moving these three pointers forward in this way, and in each step setting the `next` pointer of the current node (`q`) to the previous node (`r`), the function effectively reverses the links between the nodes, thus reversing the list.
q=p;
p=p->next;
q->next=r;  //! NOTE -- IN THIS APPROACH WE ARE MOVING THE POINTERS NOT THE ELEMENTS , DON'T CONFUSE YOURSELF , THE LINKS ARE GETTING REVERSED NOT THE ELEMENTS 
}
first=q;
}

///* In the `reverselinkedlistusing3pointer` function, the while loop continues as long as `p` is not `NULL`. In each iteration of the loop, `p` is moved one step forward with `p=p->next;`. This means that when `p` reaches the last node of the list, it will not become `NULL` immediately. Instead, it will become `NULL` in the next iteration, after the `next` pointer of the last node has been reversed by `q`.  
//?So, when `p` is pointing to the last node, `q` is pointing to the second last node. In this iteration, `q->next=r;` reverses the `next` pointer of the second last node to point to the third last node, and `p=p->next;` moves `p` to `NULL`
//?In the next iteration, `p` is `NULL`, so the loop ends. But before the loop ends, `q->next=r;` in the previous iteration has already reversed the `next` pointer of the last node to point to the second last node. Therefore, the last node is not left out.
//?After the loop, `first=q;` updates the `first` pointer to point to the last node of the original list, which is now the first node of the reversed list. This completes the reversal of the list.



void reversinglinkedlistusingrecursion(struct node *q,struct node *p){
if  (p!=NULL){
  reversinglinkedlistusingrecursion(p,p->next); //? we'll first  traverse the list 
   p->next=q; //?This line here will reverse the link by changing the next link of every node at return time 
}

else first=q ;
}
int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    cout<<"The List before reverse is\n";
    display(first);
    cout<<endl;
    ///reverselinkedlist(first);
  ///  reverselinkedlistusing3pointer(first);
  reversinglinkedlistusingrecursion(NULL,first);
    display(first);
    return 0;
}
