# include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct queue{
    int front;
    int rear;
    int size ;
  int *Q;
};

void create (struct queue *q, int size ){
    q->front=q->rear=-1;
    q->size=size;
    q->Q=(int*)malloc(size*sizeof(queue));
}

void enqueue(struct queue *q, int x){ // Added missing parameter
    if ((q->rear+1)%q->size==q->front){
        printf("Queue Is FULL");
    }
    else    
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue *q){
    int x =-1;
    if(q->front==q->rear){ // Fixed comparison operator
        printf("Queue Empty");
    }   
    else  
    {  
        x=q->Q[q->front];
        q->front=(q->front+1)%(q->size);
    }
    return x;
}

void display(struct queue *q){
    int i=q->front+1;
    do
    {
     printf("%d",q->Q[i]);
     i=(i+1)%q->size;
    } while (i!=(q->rear+1)%q->size);
    

    printf("\n"); // Add a new line after printing the elements
}

int main (){
    struct queue q;
    create(&q,5);
    enqueue(&q, 10); // Added missing &
    enqueue(&q, 20); // Added missing &
    enqueue(&q, 30); // Added missing &
    enqueue(&q, 40); // Added missing &
    enqueue(&q, 50); // Added missing &
    display(&q);
    dequeue(&q);
    display(&q);
    return 0;
}
// Time Complexity: O(1) for all operations

