#include <iostream>
#include <stdio.h>  
#include <stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*head;


void insert ( struct node *p , int pos , int x){  //! Make sure to pass  node p as argument and not just write struct node *p inside the function , otherwise it will create a new node p and not point to the head node
    struct node *t = NULL;
   
    if ( pos==0){   //? This is the case when we want to insert at the beginning of the linked list
        t=new node;
        t->data=x;
        if ( head==NULL){  ///? This is the case when the linked list is empty
            head=t;
            head->next=head;
        }
        else  {
            while(p->next!=head) //! Make sure to write p->next!=head not p!=head
            //? This is the case when the linked list is not empty 
                p=p->next;      //? Here we are moving the pointer node p to the place where we have to insert the new node t , i.e -- start of the linked list after traversing the whole linked list  
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else {
        for ( int i=0 ; i<pos-1; i++){
            p=p->next;}  //! VERY IMPORTANT NOT TO enclose creation and linking of new node inside the for loop , otherwise it will create and link the new node everytime the loop runs
            t=new node ;
            t->data =x; 
            t->next=p->next; ///? This will link the new mode t to the earlier node p's next element 
            p->next=t; //? this will link back p to new inserted node 
        
    }
}

void display(struct node *p){
    do {
        cout<<p->data<<endl;
        p=p->next;
    }
    while(p!=head);
}

int main ()
{
    int A[]={2,3,4,5,6};
    insert(head,0,10);
    insert(head,1,20);
    insert(head,2,30);
    insert(head,3,40);
    insert(head,4,50);
    display(head);
}


