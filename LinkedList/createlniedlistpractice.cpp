 #include <stdlib.h>
struct Node {
    int data ;
    struct Node *next;
}*first;

void Create ( int A[], int n )
{   
 struct Node *t; struct Node *last;
 first=(struct Node *) malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 for ( int i=1 ; i<n;i++){
    t=(struct Node *) malloc(sizeof(Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
 }
}


void insert(struct node  *p , int x , int pos){



}
