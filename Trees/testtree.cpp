///! THIS FILE CONTAINS TREE CREATION CODE WITHOUT COMMENTS TO BE USED AS TEMPLATE 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node {
   struct node* leftchild;
   int data;
   struct node* rightchild;
};

struct queue {
   int front;
   int rear;
   node** Q;
   int size;
};

int isfull(struct queue* q) {
   if (q->rear == q->size - 1) {
      return -1;
      printf("The Queue is Full");
   }
   else {
      return 0;
   }
}

int isempty(struct queue* q) {
   if (q->front == q->rear) {
      return -1;
      printf("The QUEUE IS Full");
   }
   else {
      return 0;
   }
}

void createqueue(struct queue* q, int size) {
   q->size = size;
   q->front = -1;
   q->rear = -1;
   q->Q = (node**)malloc(q->size * sizeof(node*));
}

void enqueue(struct queue* q, node* x) {
   if (isfull(q)) {
      printf("Queue is Full Cannot Insert ");
   }
   else {
      q->rear++;
      q->Q[q->rear] = x;
   }
}

node* dequeue(struct queue* q) {
   node* x = NULL;
   if (isempty(q)) {
      printf("Queue is Empty No element to Dequeue");
   }
   else
      q->front++;
   x = q->Q[q->front];
   return x;
}

struct node* root = NULL;

void TreeCreate() {
   struct node* p;
   struct node* t;
   int x;
   struct queue q;
   createqueue(&q, 100);
   root = (struct node*)malloc(sizeof(struct node));
   printf("Please Enter The Data That You Want to Get Pushed Inside The Root Node: ");
   scanf("%d", &x);
   root->data = x;
   root->leftchild = root->rightchild = NULL;
   enqueue(&q, root);

   while (!isempty(&q)) {
      p = dequeue(&q);
      printf("Please Enter The value of Left Child %d:", p->data);
      scanf("%d", &x);

      if (x != -1) {
         t = (struct node*)malloc(sizeof(struct node));
         t->data = x;
         t->leftchild = t->rightchild = NULL;
         p->leftchild = t;
         enqueue(&q, t);
      }
      printf("Enter Value Of Right Child%d:", p->data);
      scanf("%d", &x);
      if (x != -1) {
         t = (struct node*)malloc(sizeof(struct node));
         t->data = x;
         t->leftchild = t->rightchild = NULL;
         p->rightchild = t;
         enqueue(&q, t);
      }
   }
}

void preorder(struct node* p) {
   if (p != NULL) {
      printf("%d", p->data);
      preorder(p->leftchild);
      preorder(p->rightchild);
   }
}

int main() {
   TreeCreate();
   preorder(root);
   return 0;
}