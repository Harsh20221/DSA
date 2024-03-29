///* The way this code works is -- Pahle hum ek basic queue ka code likh rahe hai with nfunctions such as enqueue and dequeue and we are also writing to check if queue is full or queue is empty then queue ko modify kar rahe hai hum so that we can enter node type of values inside queue instead of integer type , jaha jaha pe modifications hai waha TODO: se  marked hai then uske baad hum fir hum tree code likh rahe hai but before writing that function we are initialising root node as global outside function then createtreefunction me sabse pahle 2 pointers *p and *q initialise kar rahe hai then assigning a integer x to store the user entered value to be pushed inside root node then we are creating a new queue jisme hum root node ka address daal rahe hai ( struct queue q ) then also using createqueue we are initialising the new queue and also giving the size on the createqueue parameter  after that using while loop first we are checking if our queue is empty or full ye wohi queue hai jisme humne root node ka address dala tha  then we are using dequeue to get the address of the root node and then we are asking the user to enter the value of left child and right child of the root node and then we are using malloc to create a new node and then we are assigning the value of left and right child to the new node and then we are using enqueue to push the address of the new node inside the queue and then we are using preorder to display the tree in preorder fashion  */


#include <iostream>  //TODO: There are certain changes that we need to make t ensure our normal queue program is suited for Tree operations 
#include <stdlib.h>
#include <stdio.h>  
using namespace std;
 struct node {  //*** For ease of Understandig we can say that This node is like a doubly linked list with previous and next node
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

 void createqueue(struct queue *q,int size){ //?Here we are creating the queue
   //? we are also initialising the queue parameters , here size parameter wil still remain even after changes 
   q->size=size;
   q->front=-1; 
   q->rear=-1;
   /////q->Q=new int [size];
q->Q=(node**)malloc(q->size*sizeof(node*)); //TODO: Make sure to change the data  type of heap memory to node type using double pointers 
   
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
   if (isempty(q)){    //? We have created the function type as node* because it is returning a node 
      printf("Queue is Empty No element to Dequeue");
   }
   else  
   q->front++;
 x=q->Q[q->front]; 
return x;
}


/* void display(struct queue *q){     
   for (int i=q->front+1;i<=q->rear;i++){  //?In this particular implementation of a queue in C++, the `front` and `rear` pointers are initialized to `-1` when the queue is empty. When an element is enqueued, the `rear` pointer is incremented and the element is inserted at the `rear` position. However, the `front` pointer remains at `-1` until an element is dequeued.
   ///?The `front+1` in the loop is used to start from the first element of the queue. If we just used `front`, we would be starting from `-1`, which is not a valid position in the array and would not correspond to any element in the queue.
      printf("%d",q->Q[i]);
   
   }
   //* This piece of code is not related to trees and was made originally to display the queue using array ,please ignore it
} */

 struct node *root=NULL;

void TreeCreate(){
struct node *p ;
struct node *t;
int x ;
struct queue q; //TODO: Do not forget to create a queue here  , Do not create a  node here
createqueue(&q,100) ; //TODO: Do not forget to make sure to call the create function to initialise the queue here 
root=(struct node*)malloc(sizeof(struct node)); //!Please do not write size * sizzeof in malloc 
printf("Please Enter The Data That You Want to Get Pushed Inside The Root Node: ");
scanf("%d",&x);
root->data=x;
root->leftchild=root->rightchild=NULL;
enqueue(&q,root);

while(!isempty(&q)){  ///? We are Checking here if the queue is empty or not  because left node to tabhi push karange agar root node present hoga that's why queue me koi address hona zaruri hai 
p=dequeue(&q); //TODO: Please do not forget to insert the value of dequeue inside p 
printf("Please Enter The value of Left Child %d:",p->data); //TODO: Here we are asking the user to enter the value of left child of the current node
scanf("%d", &x);
if(x !=-1){
t=(struct node*)malloc(sizeof(struct node));
t->data=x;
t->leftchild=t->rightchild=NULL;
p->leftchild=t;
enqueue(&q,t);
}
printf("Enter Value Of Right Child%d:",p->data);
scanf("%d",&x);
if ( x!=-1){  //TODO: Please don't be a moron and add a semicolon after the if condition (x!=-1) and waste an hour fixing it 
 t=(struct node *)malloc(sizeof(struct node )); //? In bothb left and right Child we will use t node 
t->data=x;
t->leftchild=t->rightchild=NULL; //Todo: Make sure to set the left and right child of t as null because the left child and right child is governed by p pointer which is takking the address of current node from queue by dequeue in line 104 hence either left or right child both will be assigned to p as p will always be the current node 
p->rightchild=t;
enqueue(&q,t); //?Here we'll, again insert the t pointer in queue as it's our reusable pointer
} //! Both left and Right node assignment will be made inside same while loop 
}

} 


void preorder(struct node *p){
   if (p!=NULL){
printf("%d",p->data);
preorder(p->leftchild);
preorder(p->rightchild);
   }
}
void inorder(struct node *p){
   if (p!=NULL){
      inorder(p->leftchild);
      printf("%d",p->data);
      inorder(p->rightchild);

   }
}

void postorder(struct node *p){
   if(p!=NULL){
      postorder(p->leftchild);
      postorder(p->rightchild);
      printf("%d",p->data);
   }
}


int countnodes(struct node *root){  ///TODO: In order to print the result make sure to enclose it inside print statement 

   if (root!=NULL){

return countnodes(root->leftchild)+countnodes(root->rightchild)+1;
   }
else return 0;
}

int heighoftree(struct node *root){
   int x; int y; x=y=0;
   if ( root==0){return 0;}
  x=countnodes(root->leftchild);
  y=countnodes(root->rightchild);
  if(x>y){
   return x+1;
  }
  else return y+1;
}
///? NOTES REGARDING THE HEIGHT OF TREE working ---- BELOW , HOW IT WORKS AND POSSIBLE DOUBT 
///* This C++ function, `heighoftree`, is used to calculate the height of a binary tree. The function takes a pointer to the root node of the binary tree as its argument The function uses a recursive approach to traverse the binary tree and calculate the height. The base case for the recursion is when the function is called with a null pointer, which represents an empty tree. In this case, the function returns 0, because the height of an empty tree is 0 If the function is called with a non-null pointer, it means that there is at least one node in the tree (the node that the pointer is pointing to). In this case, the function makes two recursive calls: one for the left child of the current node, and one for the right child. Each of these calls will return the height of the left and right subtrees, respectively The function then compares the heights of the left and right subtrees. If the height of the left subtree is greater than the height of the right subtree, the function returns the height of the left subtree plus 1. Otherwise, it returns the height of the right subtree plus 1. The "+1" is to account for the current node. 

///*This function uses a depth-first traversal approach, visiting all nodes in the left subtree before visiting the nodes in the right subtree. The time complexity of the function is O(n), where n is the number of nodes in the tree, because it visits each node exactly once.

///*The function `heighoftree` is designed to calculate the height of a binary tree. The height of a binary tree is the length of the longest path from the root to a leaf nodeIn the function, `x` and `y` are used to store the heights of the left and right subtrees, respectively. The function then checks if `x` is greater than `y`. If `x` is greater, it means the left subtree is taller, so it returns `x + 1` (the "+1" accounts for the current node). If `x` is not greater than `y`, it means the right subtree is taller or both subtrees have the same height, so it returns `y + 1`. So, even when `x` equals `y`, the function correctly returns `y + 1` as the height of the tree. This is why there's no explicit condition for `x = y`. The case where `x = y` is handled by the `else` clause, which returns `y + 1`.


















int main (){
TreeCreate();
preorder(root);
cout<<endl;
 printf("Count:%d",countnodes(root)); ///!!!!! Very important to enclose this count nodes function inside print statement else nothing will get printed 
 cout<<endl;
 printf("Height of tree:%d",heighoftree(root));
return 0;
}