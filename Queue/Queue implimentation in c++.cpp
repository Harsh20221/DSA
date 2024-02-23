#include <iostream>
using namespace  std;
struct Queue {
int front ;
int rear;
int size;
int *q;
};
void create(struct Queue *m , int size ){
m->rear=-1;
m->front= -1;
m->size=size;
m->q=new int [size]; 
}
void enqueue ( struct  Queue *m , int x ){
  if(m->rear==m->size-1)
    cout<<"Queue is Full "<<endl;
  else 
    m->rear++;
  m->q[m->rear]=x;
  
}
void dequeue(struct Queue *m){
  int x;
  if (m->front==m->rear){
    cout<<"queue is empty "<<endl;
  }
  else m->front++;
   x=m->q[m->front];
  
}


void  display(struct Queue m){
for(int i=m.front+1 ; i<=m.rear;i++){
  cout<<m.q[i];
}  
}

int main() { 
    struct Queue m;
    int size;
    printf("Please Enter the size of the queue");
scanf("%d",&size);
    create(&m,5);
    enqueue(&m,10);
    enqueue(&m,20);
    enqueue(&m,30);
    ///display(m);
    dequeue(&m);
    cout<<endl;
    display(m);
    return 0;

  

}

