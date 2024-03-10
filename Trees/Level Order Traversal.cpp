#include <iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;


struct node {
    struct node *lchild;
    struct node *rchild;
    int data;
};



struct queue {
int front ;
int rear;
node **Q;
int size ;
};


void createqueue(struct queue *q, int size ){
q->front=q->rear=-1;
q->size=size;
q->Q=(node**)malloc(size*sizeof(node)); ///! use node ** here instead of node * 
}


int isfullqueue(struct queue *q){
    if (q->rear==q->size-1){
       //// cout <<"The Queue is Full and Further Insertion is  Not Possible "<<endl;
        return -1;

    }
    else return 0;

}

int isemptyqueue(struct queue q){
    if ( q.front==q.rear){
       //// cout <<"Queue is Empty , Cannot comply"<<endl;
        return -1;
    }
    else return 0;
}

void enqueue(struct queue *q, node *x ){
    q->rear++;
    q->Q[q->rear]=x;
}

node * dequeue(struct queue *q){
    node *x;
        q->front++;
    x=q->Q[q->front];
    return x;

}
struct node *root = NULL;

void createtree(){
    struct node *p;
    struct node *t;
    struct queue q;
    createqueue(&q,100);
    int x;
root=(node*)malloc(sizeof(node));
cout<<"Please Enter The Data That you want to enter in the root node: "<<endl;
cin>>x;
root->data=x;
root->lchild=root->rchild=NULL;
enqueue(&q,root);
while(!isemptyqueue(q)){
p=dequeue(&q);
cout<<"Please Enter the Data That you want to enter in the left child of "<<":"<<p->data<<endl;
cin>>x; //! Do not forget to write cin or else it'll display both left and right insert simoultanously 
if(x!=-1){
t=new(node);//! Make sure to seperately create nodes for left and right 
 t->data=x;
t->lchild=t->rchild=NULL;
p->lchild=t;
enqueue(&q,t);
}
cout<<"Please Enter The Data that you want to enter in the Right child of "<<":"<<p->data<<endl;
cin>>x;
if(x!=-1){
    t=new(node);//?! Make sure to seperately create nodes for left and right 
    t->data=x;
    t->lchild=t->rchild=NULL;
    p->rchild=t;
    enqueue(&q,t);
}


}

}

void preorder(struct node *p){
   if (p!=NULL){
printf("%d",p->data);
preorder(p->lchild);
preorder(p->rchild);
   }
}

/* int main (){
createtree();
preorder(root);
return 0;
}
 */

void levelordertraversal(struct node *root){
    struct queue q ;
    createqueue(&q,100);
    printf("%d",root->data);
    enqueue(&q,root);
    while(!isemptyqueue(q)){
        root=dequeue(&q); //TODO: Make sure to dequeue inside the root node not p or any other node 
if(root->lchild!=NULL){
    printf("%d",root->lchild->data);  //! Make sure to print like this root->lchild->data and not root->data or just root->lchild else the address will be printed and not data 
    enqueue(&q,root->lchild);//TODO: Make sure to insert left child of root and noot root itself inside queue 
}

if(root->rchild!=NULL){
    printf("%d",root->rchild->data);  //! Make sure to print like this root->rchild->data and not root->data or just root->rchild else something gibberish will be printed
    enqueue(&q,root->rchild);
}
    }
}

int main (){
    createtree();
    levelordertraversal(root);}