#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node {
    int data ;
    struct node *next ;
}*first;

void create (int A[], int n ){
struct node *r ; struct node *last;
first=new node;
first->data=A[0];
first->next=NULL;
last=first;
for(int i=1; i<n;i++ ){
    r=new node;
    r->data=A[i];
    r->next=NULL;
    last->next=r;
    last=r;
}
}

void display(struct node *p){
    while (p!=NULL ){
     cout<<p->data<<endl;
     p=p->next;
    }
    
}
void linearsearchiterative(struct node *p,int key){  //? This is one waay of doing linear search in a linked list , 
//* This is personally coded by me using unique approach 
    while ( p!=NULL){
        if(key==p->data){
            cout<<"Element is found "<<"At index----"<<p<<endl;
          break;  //! Add break statement here to break the loop 
        }
        else if(p->data!=key)
        p=p->next;    //! in a linked list it is very important to go to the next element of linked list
    }
    
}

struct node * linearsearchrecursive(struct node *p,int key){  //? This is another way of doing linear search in a linked list , as teched by instructor
if (p==NULL){
    return NULL;
}
else if (key==p->data){
    return p;
  
}
return (linearsearchrecursive(p->next,key)); //! Make sure to enclose Recursive function inside return statement 

}

struct node * linearsearch2iterative(struct node *p,int key){  //? This is another way of doing linear search in a linked list , as teched by instructor 
while (p!=NULL){
    if (key==p->data)
        return p;
p=p->next;
    }
return NULL;  //? This is the return statement of the function if we don't find the element in the linked list 



}

int main (){
    int A[]={2,3,4,5,6,7,8};
    create(A,7);
    display(first);
    linearsearchiterative(first,3);
    cout<<"The element is found at index\n "<<linearsearch2iterative(first,3); //! We need to use cout here because the function doesn't have cout but  return statement  only 
    cout<<"The element is found at index:\n"<<linearsearchrecursive(first,3); //! We need to use cout here because the function doesn't have cout but  return statement  only


    return 0;
}

