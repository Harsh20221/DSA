#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 struct queue  {
    int front;
    int rear;
    int *Q;
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
q->Q=(int*)malloc(sizeof(size));
   
 }

void enqueue(struct queue *q, int x) {
   if (isfull(q)) {
      printf("Queue is Full Cannot Insert ");
   } else {
      q->rear++;
      q->Q[q->rear] = x;   //! do not just write rear even inside the square brackets , Make sure to write q->rear
   }
}

void dequeue( struct queue *q ){
   int x;
   if (isempty(q)){
      printf("Queue is Empty No element to Dequeue");
   }
   else  
   q->front++;
 x=q->Q[q->front];
printf("The Deleted Element is:",x);
printf("\n");
}


void display(struct queue *q){
   for (int i=q->front+1;i<=q->rear;i++){
      printf("%d",q->Q[i]);
   }
}

int main(){
   struct queue q;
   create(&q,5);
   enqueue(&q,10);
   enqueue(&q,20);
   enqueue(&q,30);
   enqueue(&q,40);
   enqueue(&q,50);
   dequeue(&q);
   display(&q);
   return 0;
}