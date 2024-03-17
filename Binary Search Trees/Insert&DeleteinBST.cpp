#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
///* VERY IMP NOTE REGARDING THIS CODE: This code is working in replit but not locally in this machine , The mystery remains unknown. till now. and no fixes have been found 
struct node {
    node*lchild;
    node*rchild;
    int data;
}*root=NULL;

struct node*Insert(struct node *p, int key){ ///! Very Important that when defining a function of return value node*make sure the name starts with a capital letter like Insert here and not like insert 
    struct node *t=NULL;
    if ( p == NULL){
        t= new node ;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }

    if (key<p->data){
    p->lchild=Insert(p->lchild,key);
    }

    else if ( key>p->data){
        p->rchild=Insert(p->rchild,key);
    }
    return p;
}


void preorder(struct node *p){
    if (p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main(){
    root=Insert(root,10);
    Insert(root,5);
    Insert(root,20);
    Insert(root,8);
    Insert(root,30);
    preorder(root);
    return 0;
}

