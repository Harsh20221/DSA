#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
int data;
struct node *next;
}*first;

int count(struct node *p){
    int c=0;
while (p!=NULL){
c++;
p=p->next;
}
return c ;
}

void insert(struct node *p,int index ,int x) {
struct node *q;
if(index<0 || index>=count(p) ){
return;}
q=new node;
q->data=x;
if(index==0){
q->next=first;
first=q;
}
else 
for (int i=0 ; i<index-1;i++){
q->next=p;


}




}