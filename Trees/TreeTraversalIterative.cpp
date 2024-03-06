//* If you  Have Doubts regarding creation of trees then check Tree Creation.cpp for comments at each step of creation 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node {
    struct node* leftchild;
    struct node* rightchild;
    int data;
};

struct queue {
    int front;
    int rear;
    node** Q;
    int size;
};

struct stack {
    int top;
    node** S;//Todo: Make sure to give the data type of stack also to be a pointer to a node
    int size;
};

void createstack(struct stack* s, int size) {
    s->top = -1;
    s->size = size;
    s->S = (node**)malloc(size * sizeof(node*));
}

int isstackfull(struct stack* s) {
    if (s->top == s->size - 1) {
        return -1;
        cout << "Stack is FULL CANNOT INSERT " << endl;
    }
    else return 0;
}

int stackempty(struct stack* s) {
    if (s->top == -1) {
        return -1;
        cout << "Stack is Empty Cannot Remove " << endl;
    }
    else return 0;
}

int pushstack(struct stack* s, node* x) {
    if (!isstackfull(s)) {
        s->top++;
        s->S[s->top] = x;
    }
    return 0; //! Do not write -1 here else code will fail 
}

node* popstack(struct stack* s) { //! This is the only function that returns a value so we need to return a value of type node*
    node* x = NULL;
    if (!stackempty(s)) {
        x = s->S[s->top];
        s->top--;
    }
    return x;
}

void CreateQueue(struct queue* q, int size) {
    q->front = q->rear = -1;
    q->size = size;
    q->Q = (node**)malloc(size * sizeof(node*));
}

int isfull(struct queue* q) {
    if (q->rear == q->size - 1) {
        return -1;
    }
    else return 0;
}

int isempty(struct queue* q) {
    if (q->front == q->rear) {
        return -1;
    }
    else return 0;
}

void enqueue(struct queue* q, node* x) {
    if (isfull(q)) {
        printf("The Queue Is full , Cannot insert");
    }
    else
        q->rear++;
    q->Q[q->rear] = x;
}

node* dequeue(struct queue* q) {
    node* x = NULL;
    if (isempty(q)) {
        printf("Queue is Empty , No element to return ");
    }
    else
        q->front++;
    x = q->Q[q->front];
    return x;
}

struct node* root = NULL;

void treecreate() {
    struct node* p;
    struct node* t;
    struct queue q;
    int x;
    CreateQueue(&q, 100);
    root = (node*)malloc(sizeof(node));
    printf("Please enter Value of The Root Node: ");
    scanf("%d", &x);
    root->data = x;
    root->leftchild = root->rightchild = NULL;
    enqueue(&q, root);
    while (!isempty(&q)) {
        p = dequeue(&q);
        printf("Please Enter the value of Left child %d :", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (node*)malloc(sizeof(node));
            t->data = x;
            t->leftchild = t->rightchild = NULL;
            p->leftchild = t;
            enqueue(&q, t);
        }
        printf("Please Enter the value of Right child %d :", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (node*)malloc(sizeof(node));
            t->data = x;
            t->leftchild = t->rightchild = NULL;
            p->rightchild = t;
            enqueue(&q, t);
        }
    }
}
void iterativepreorder(struct node* p) {
    struct stack s;
    createstack(&s, 100);
    while (p  || !stackempty(&s)) {
        if (p) {
            printf("%d", p->data);
            pushstack(&s, p);
            p = p->leftchild;
        }
        else {
            p = popstack(&s);
            if (p != NULL) {  ///! Please make sure to write this here or else you'll get segmentation error as it'll access the right child of NULL    
            ///* SPECIAL NOTE-- HERE THE else block of iterative display is different than what's in the udemy course as using that approach was creating errors basically we added an extra p!=NULL statement at line 153 to prevent segmentation error 
                p = p->rightchild;
            }
        }
    }
}

void inorderiterative(struct node *p){
    struct stack s;
    createstack(&s,100);
while(p!=NULL || !stackempty(&s)){
    if(p!=NULL){
         pushstack(&s,p);
        p=p->leftchild;
    }
    else 
    p=popstack(&s);
   
if(p!=NULL){
       printf("%d",p->data); ///!The printf statement will be inside the not null loop 
       ///* SPECIAL NOTE-- HERE THE else block of iterative display is different than what's in the udemy course as using that approach was creating errors basically we added an extra p!=NULL statement at line 172 to prevent segmentation error 
        p=p->rightchild;}
    
}
}
int main() {
    treecreate();
   /// iterativepreorder(root);
   inorderiterative(root);
    return 0;
}




















