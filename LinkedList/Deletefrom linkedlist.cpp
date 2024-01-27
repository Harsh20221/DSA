#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
    int data ;
    struct node *next;

}*first;

void create (int A[], int n ){
    struct node *last;    struct node *t; 
    first=new node;  //! Don't forget to locate memory for our first node 
    first->data=A[0];
    first->next=NULL;  //? we are asigning first's next as null 
   last=first;  //? Here we are making our first element as last element 

   for ( int i=1 ; i<n; i++){  ///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!VERY VERY VERY VERY VERY VERY VERY VERY VERY VERY VERYU VERY VERY VERY VERY VERY IMPORTANT IMPORTANT IMPORTANT  IMPORTANT 
  //! TO WRITE I=1 INSTEAD OF I=0 IN THE FOR LOOP OR ELSE NOTHING WILL WORK 
    t=new node ;
  t->data=A[i];
  t->next=NULL;
  last->next=t; //? we are doing  this step here because in the earlier steps in the insert function we made our first element as last element and now we have to link the new element with the last element (first element ) so we link the new node with last element 
  last=t; // ?here we are making our new element as last element 
   }
}


int  count(struct node *p){
    int c =0;
    while (p!=NULL){
    c++;
    p=p->next; //! Don't forget to write this step or else count will not go to next element 
    }
    return c;
}

int  Delete (struct node *p, int index ){
int x=-1; //? This the variable where we are going to store the deleted element 
struct node *q=NULL;  //? This is the node that we'll use to delete the elements 
    if(index<0||index>count(p)){
       return -1;
    }
     if (index==1){
    q=first;  //? Here q is pointing to the first element   Yes, you can certainly write `x=q->data` instead of `x=first->data`. Since `q` has been assigned to `first` in the previous step (`q=first;`), both `q` and `first` are pointing to the same node in the linked list. Therefore, `q->data` and `first->data` are the same. 
//?Using `q` instead of `first` can be beneficial in cases where you want to keep `first` unchanged. This is because `first` often serves as a permanent reference to the start of the list, while `q` is a temporary pointer used for operations like traversal or deletion. However, in this specific code snippet, either `q->data` or `first->data` would work the same.
  ////******* NOTE -- in the previous step both q and first are simoultanously pointing on the first node so we can even write x=q->data in the next step and it won't be wrong 
    x=first->data;   
    first=first->next;
    delete(q) ;   //! Do not write delete first here or else everything will break 
return x ;
    }

else 
for ( int i=0 ; i<index-1;i++){  //!?The line of code `for (int i=0; i<index-1; i++)` in C++ is a for loop that starts with `i` equal to 0 and continues as long as `i` is less than `index-1`, incrementing `i` by 1 in each iteration
//?This loop is typically used when you want to reach a specific node in a linked list. The variable `index` represents the position of the node in the list that you're interested in. Since linked lists are zero-indexed (i.e., the first node is at position 0), `index-1` is the position of the node before the one you're interested in.
//?By iterating from 0 to `index-1`, you're effectively moving a pointer through the list to the node just before the one at the desired position. This is often done when you want to delete or insert a node at a specific position in the list, as you need a reference to the node before the position of interest to update the `next` pointers correctly.

     q=p ; //? Again we are pointing q to the elemenet at given index in the list  
   p=p->next; }//? We are pointing p to the next element of the element at given index in the list
q->next=p->next; //? We are pointing q's next to p's next
x=p->data; //? We are storing the value of p's data in x
delete(p);//* in the delete statement you can write either p or q , it'll not make any differance here because both p and q are pointing to the same node
return x;

}

void display(struct node *p){
    while (p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main (){
    int A[]={2,3,4,5,6};
    create(A,5);
    Delete(first,1);
    display(first);
    return 0;
}






