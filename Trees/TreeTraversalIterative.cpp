//* If you  Have Doubts regarding creation of trees then check Tree Creation.cpp for comments at each step of creation 

#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node {
 struct node *leftchild;
 struct node *rightchild;
 int data;
};

struct queue{
int front;
int rear;
node **Q;
int size;
};

struct stack{
    int top;
    node**S;
    int size;
};

void createstack(struct stack *s,int size ){
    s->top=-1;
    s->size=size;
    s->S=(node**)malloc(size*sizeof(node));
}

int isstackfull(struct stack *s){
    if(s->top==s->size-1){
        return -1;
        cout<<"Stack is FULL CANNOT INSERT "<<endl;

    }
    else return 0;

}

int stackempty(struct stack *s){
    if(s->top==-1){
return -1;
cout<<"Stack is Empty Cannot Remove "<<endl;
    }
    else return 0;

}

int pushstack(struct stack  *s,node* x){
if(!isstackfull(s)){
    s->top++;
    s->S[s->top]=x;
}
else return -1;
}

int popstack(struct stack*s){
    node *x=NULL;
    if(!stackempty(s)){
    x=s->S[s->top];
    s->top--;
    }
    else return -1;
}





void CreateQueue(struct queue *q,int size){
q->front=q->rear=-1;
q->size=size;
q->Q=(node**)malloc(size*sizeof(node*));
}

int isfull(struct queue *q){
if ( q->rear==q->size-1){
    return -1;
}
else return 0;
}


int isempty(struct queue *q){
    if ( q->front==q->rear){
        return -1;
    }
    else return 0;

}

void enqueue(struct queue *q,node *x ){
if (isfull(q)){
    printf("The Queue Is full , Cannot insert");
}
else 
q->rear++;
q->Q[q->rear]=x;
}


node* dequeue( struct queue *q){
node *x=NULL;
    if(isempty(q)){
        printf("Queue is Empty , No element to return ");
    }
    else 
 q->front++;
 x=q->Q[q->front];
 return x;
}

struct node *root=NULL;

void treecreate(){
struct node *p;
struct node *t;
struct queue q ;
CreateQueue(&q,100);
int x=NULL;
root=(node*)malloc(sizeof(node*));
printf("Please enter Value of The Root Node ");
scanf("%d",&x);
root->data=x;
enqueue(&q,root);
while(!isempty){
p=dequeue(&q);
printf("Please Enter The data that you Wnat To enter In the Root Node ");
scanf("%d",&x);
root->data=x;
p=dequeue(&q);
    printf("Please Enter The data you want in the Left node of---%d",p->data,"");
    scanf("%d",&x);
if(x!=-1){
    t=(node*)malloc(sizeof(node));
    t->data=x;
    t->leftchild=t->rightchild=NULL;
    p->leftchild=t;
    enqueue(&q,t);
     printf("Please Enter Data to be pushed in the right node of ---",p->data);
    scanf("%d",&x); 
    if(x!=-1){
     t=new(node);
    t->data=x;
    t->leftchild=t->rightchild=NULL;
    p->rightchild=t;    
    enqueue(&q,t);
    }
}}}
 
void iterativepreorder(struct node  *p){
    struct stack s;
    createstack(&s,100);
    while(p!=NULL|| !stackempty(&s)){
        if(p!=NULL){
        printf("%d",p->data);
        pushstack(&s,p);
    p=p->leftchild;}
    else popstack(&s);
    p->rightchild;
    }
}




















