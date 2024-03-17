#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//! THIS CODE WORKS , It is the copy of Insert in Binarytree.cpp but using double pointers and is working fine but in replit only not here locally
struct node {
    struct node * lchild;
    struct node *rchild;
    int data;
};

struct node *root=NULL;

void insert(struct node **t, int key ){
    struct node *p;
    struct node *r = NULL, **k;
    k = t;
    while(*t != NULL){
        r = *t;
        if (key == (*t)->data){
            cout << "ERROR: Key already exists." << endl;
            return;
        }
        else if(key < (*t)->data){
            t = &(*t)->lchild;
        }
        else {
            t = &(*t)->rchild;
        }
    }
    p = new node;
    p->data = key; 
    p->lchild = p->rchild = NULL;
    if(r == NULL){
        *k = p; // This is the first node being inserted. root will be updated.
    }
    else if(key < r->data){
        r->lchild = p;
    }
    else {
        r->rchild = p;
    }
}

void preorder(struct node *root){
    if(root != NULL){
        printf("%d ",root->data);
        if(root->lchild != NULL) {
            preorder(root->lchild);
        }
        if(root->rchild != NULL) {
            preorder(root->rchild);
        }
    }
}

int main() {
    insert(&root,33);
    insert(&root,4);
    preorder(root);}