#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first;
void create(int A[], int n) { 
    int i;
    struct node *last ;
    struct node *r;
   first=new node; 
first->data=A[0];  //! In first make surew to  initialise data A[0] and not i 
first->next=NULL;
last=first;
for (i=1 ; i<n;i++){
   r=new node;
   r->data=A[i];
   r->next=NULL;
   last->next=r;
   last=r;
}
}
void displayrecursive(struct node *p){  //! Make sure to pass struct node p to display parameter , this will be applicable for both recursive and iterative approach 
    if(p!=NULL){  //! Make sure to give if condition to display function 
    cout<<p->data<<endl;
displayrecursive(p->next);}  //! Do not write p=p->next in display function 
                            ///! write p->next only 
}

void count (struct node *p ){  //! Make sure to pass struct p as parameter to count function    
int c=0;    //* Fun fact-- In order to write count or sum or similar functions that iterates through the entire linked list , you just need to remember the display funnction and modify it accordingly to count or sum 
while(p!=NULL){  //! In count function we use while instead of if 
    c++;
    p=p->next;  //! Do not forget to write the p-> next statement to get to the next node 
}
cout<<c<<endl;   //! Do not write cout p here you need to print the count not the struct p 
}
int sumiterative(struct node *p){
 int sum=0;
while(p!=NULL){
    sum+=p->data;  //! Make sure to add sum again to sum along with the data of struct p 
    p=p->next;   ///! Do not forget to move p towards next node 
} 
return sum;
}

int sumrec(struct node *p){
 if(p=NULL)   //! There is no need to define a variable named sum here and incriment it again and again , just write the if condition and return 0 and in the else condition write the recursive function
 return 0; 
 else 
  return sumrec(p->next)+(p->data);  //? This is how you'll define the recursive function that will going to be executed again and again till we have our sum
    

}

int main (){
 int  A[]={2,3,4,5,6,7,8};
 create(A,7);
count(first);  //! Make sure to call the count function by first as parameter 
displayrecursive(first);
///cout<<"The sum is "<<sumiterative(first);  ///! Very important to enclose the sum statement inside cout or else it will not work 
cout<<"The sum is "<<sumrec(first);
}

