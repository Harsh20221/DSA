 #include <stdlib.h>
struct node {
    int data ;
    struct node *next;
}*first;

void Create ( int A[], int n )
{   
 struct node *t; struct node *last;
 first=(struct node *) malloc(sizeof(struct node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 for ( int i=1 ; i<n;i++){
    t=(struct node *) malloc(sizeof(node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
 }
}


void insert(struct node  *p , int x , int pos){
struct node *t;
if ( pos==0){
        t=(struct node * )malloc(sizeof(struct node ));
        t->data=x;
        t->next =first;
        first=t;
    }
    else
    {
        for (int i=0 ; i<pos-1;i++){
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
    }

}

void inserttolast(struct node *p,int x){
    struct node *t; struct node *last;
t=(struct node*)malloc(sizeof(node));
t->data=x;
    if ( first==NULL){
        last=first=t;
    }

    else {
    last->next=t;
    last=t;
    }
}

void Delete(struct node *p , int index){
struct node *q; int x ;
for ( int i=0 ; i<index-1;i++){
    q=p;
    p=p->next;
    q->next=p->next;
x=p->data;
free(p);
return (x) ;
}

}





























