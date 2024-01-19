#include <Iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*first=NULL;


void create(int A[], int n) { //! Define the function with int A[] , don't just write A[]
    int i; //? Declare a variable i
    struct Node *t, *last;  //? Declare a pointer to a node t and last
    first = new Node;    //? Allocate memory in heap for the first node
    first->data = A[0];  //?    Assign the first element of the array to the data of the first node
    first->next = NULL;//?    Assign NULL to the next pointer of the first node
    last = first; //?    Assign the address of the first node to the last pointer
    for(i=1;i<n ; i++ ){  //?    Iterate through the array from 1 to n-1
     t=new Node; //?    Allocate memory in heap for the new node
     t->data=A[i]; //?    Assign the ith element of the array to the data of the new node
     t->next=NULL;//?    Assign NULL to the next pointer of the new node
     last->next=t; //?    Assign the address of the new node to the next pointer of the last node
     last=t;   //?    Assign the address of the new node to the last pointer
    }
}
 
 void display(struct Node *p) { //! Make sure to pass a struct Node to print function with a name 
while (p!=NULL ){  //! After writing the while condition of p , just write the statement to print p 
cout<<p->data<<endl; //? That's how you print p's element by typing it as p-> data 
p=p->next;   //? Assign p to p->next
}
 }
  int main(){
    int A[]={2,3,4,5,6};
    //struct Node n;
    create(A,5) ;
    display(first);  //! Pass the first node to the display function
    //? we are passing the first node to the display function because we want to print the whole linked list
  }
