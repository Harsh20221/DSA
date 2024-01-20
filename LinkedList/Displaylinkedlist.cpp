#include <Iostream>  
#include <stdlib.h> 
#include <stdio.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*first=NULL; //? Declare a global pointer to a node and assign it to NULL  
 //? This is how the create function of the Code is working 
 //*The provided C++ code is a function named `create` that constructs a singly linked list from an array of integers. The function takes two parameters: an array of integers `A[]` and an integer `n` representing the size of the array
//*The function begins by declaring an integer `i` which will be used as a counter in the loop that iterates through the array. It also declares two pointers `t` and `last` of type `Node`. `Node` is a struct that has two members: an integer `data` and a pointer `next` to another `Node`

//*The function then allocates memory for the first node of the linked list on the heap using the `new` keyword. The `data` member of the first node is assigned the first element of the array `A[0]`, and the `next` pointer is set to `NULL`, indicating the end of the list. The `last` pointer is then set to point to the first node.

//*The function then enters a loop that starts from the second element of the array (index 1) and ends at the last element (index `n-1`). In each iteration of the loop, it allocates memory for a new node `t`, assigns the `i`th element of the array to the `data` member of the new node, and sets the `next` pointer of the new node to `NULL`. The `next` pointer of the `last` node is then set to point to the new node, effectively adding the new node to the end of the list. Finally, the `last` pointer is updated to point to the new node.

//*By the end of the loop, a singly linked list is created where each node contains an element from the array and points to the next node in the list. The last node in the list points to `NULL`, indicating the end of the list.

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
 void recdisplay(struct Node *p){
    if (p!=NULL){
        cout<<p->data<<endl;
        recdisplay(p->next);
    }
 }
  int main(){
    int A[]={2,3,4,5,6};
    //struct Node n;
    create(A,5) ;
    display(first);  //! Pass the first node to the display function
    //? we are passing the first node to the display function because we want to print the whole linked list
  }
