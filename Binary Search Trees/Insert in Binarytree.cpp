#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


struct node {
    struct node * lchild;
    struct node *rchild;
    int data;
};


int insert(struct node *t, int key ){
struct node *p;
struct node *r;
while(t!=NULL){
    r=t;
    if (key==t->data){
        return ;
    }

else if(key<t->data){
        t=t->lchild;
    }
    else if(key>t->data){
        t=t->rchild;
        
    }

}
p=new(node);
p->data=key; 
p->lchild=p->rchild=NULL;
if(p->data<r->data){
    r->lchild=p;}
    else 
    r->rchild=p;

}
///? IMPORTANT FAQ
///? The reason we can't use `t` in the condition at line 35 is because The `r` node is used to keep track of the last non-NULL node we've visited (the parent of the new node we're inserting). When we exit the while loop, `r` points to the parent node where we want to insert the new node, while `t` is `NULL`. If we tried to use `t` in the condition at line 35, we would be trying to access `t->data`, but since `t` is `NULL`, this would result in a null pointer dereference, which is undefined behavior in C++. So, we need `r` to keep track of the parent node where we're going to insert the new node.