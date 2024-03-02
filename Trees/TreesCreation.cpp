#include <iostream>  //TODO: There are certain changes that we need to make t ensure our normal queue program is suited for Tree operations 
#include <stdlib.h>
#include <stdio.h>  
using namespace std;
 struct node {  //* For eease of Understandig we can say that This node is like a doubly linked list with previous and next node 
   struct node *leftchild;   
   int data;  
   struct node *rightchild;

 };
 struct queue  {
    int front;
    int rear;
    node **Q;  //TODO: Make Sure to Change the type of the array where we store the queue to the new type node  , Use double pointer ** here
    int size;
 };


 int isfull(struct queue *q){
if( q->rear==q->size-1){
return -1;  //! Here we are returning -1 to indicate that the queue is full make sure to follow this convention only as using 0 or 1 will not work
printf("The Queue is Full");}
else {
return 0;}

 }

 int isempty(struct queue *q){
   if ( q->front==q->rear){
      return -1;
      printf("The QUEUE IS Full");
   }
else {
   return 0;
}
 }

 void create(struct queue *q,int size){ //?Here we are creating the queue
   //? we are also initialising the queue parameters 
   q->size=size;
   q->front=-1; 
   q->rear=-1;
   /////q->Q=new int [size];
q->Q=(node**)malloc(q->size*sizeof(node*)); //TODO: Make sure to change the data  type of heap memory to node type 
   
 }

void enqueue(struct queue *q, node *x) { //TODO: Make sure to also change the enqueue data type to *node 
   if (isfull(q)) {
      printf("Queue is Full Cannot Insert ");
   } else {
      q->rear++;
      q->Q[q->rear] = x;   //! do not just write rear even inside the square brackets , Make sure to write q->rear
   }
}

node* dequeue( struct queue *q ){ //TODO:Make sure to change the fuction type to node *
   node* x=NULL; //TODO: Make sure to change the type of x to node *
   if (isempty(q)){
      printf("Queue is Empty No element to Dequeue");
   }
   else  
   q->front++;
 x=q->Q[q->front]; 
return x;
}


void display(struct queue *q){
   for (int i=q->front+1;i<=q->rear;i++){
      printf("%d",q->Q[i]);
   }
}
