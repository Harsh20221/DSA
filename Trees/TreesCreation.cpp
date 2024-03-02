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
return 0;
printf("The Queue is Full");}
else {
return 1;}

 }

 int isempty(struct queue *q){
   if ( q->front==q->rear){
      return 0;
      printf("The QUEUE IS Full");
   }
else {
   return 1;
}
 }

 void enqueue(struct queue *q){
   

 }