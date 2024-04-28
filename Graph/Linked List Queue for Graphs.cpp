#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{    //#  This code's  empty condition is when front=NULL , Full condition when our node t=NULL because we know if there is no space left in heap then we cannot insert more 
int data;
 node *next =NULL;
}*front=NULL,*rear=NULL;

void enqueue(int x) {
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Queue is full\n");
    }
    else  t->data=x;
    t->next=NULL;
    if(front==NULL){
        front=rear=t;    
    }
    else
    rear->next=t;
    rear=t;

    }

int dequque(){
    int x=-1;
    node *t;
    if(front==NULL){
    printf("Queue is Empty no element to process ");}
    else {
   x=front->data;
   t=front;
   front=front->next;
   free(t);}
   return x;
}

void display(){
    struct node *t=front;
    while (t!=NULL){
    printf("%d",t->data);
    t=t->next;
    }
}

int main(){
    enqueue(40);
    enqueue(50);
    enqueue(70);
    enqueue(80);
    dequque();
    display();


}