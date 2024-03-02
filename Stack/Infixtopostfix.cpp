#include <iostream>
#include<strings.h>
using namespace std;
struct Stack {
    int size;
    int top;
    int *s; //? Pointer to an array
};

void push ( struct Stack *S , int x ){
if(S->top ==S->size-1 ){
      cout<<"The Stack is Full"<<endl;}
else {
    S->top++;
    S->s[S->top]=x;
}

}
void pop ( struct Stack *S ){
    int x=-1;
if(S->top ==-1 ){
      cout<<"The Stack is Empty"<<endl;}
else { 
    x=S->s[S->top];
    S->top--;
    cout<<"The popped element is "<<x<<endl;
}}

void Display ( struct Stack S ){
    if (S.top==-1 ){
        cout<<"Stack Is Empty there is not any elememnt to print "<<endl;
    }
for(int i=S.top;i>=0;i--){
    cout<<S.s[i]<<endl;
}}

int precedence(char x ){
    if(x=='+'||x=='-'){
    return 1;
    }
    else if
   ( x=='*'||x=='/'){
    return 2 ;}
    else return 0;
}

int isoperand(char x){

if (x=='+'||x=='-'||x=='*'||x=='/'){
    return 0;}
    else {
    return 1;}
}

int infixtopostflix(char* inflix) {
    struct Stack S;
    int i=0; int j=0;
    char* postflix;
    int len = strlen(postflix);
    postflix=(char* ) malloc ( sizeof(inflix+1));

    while (inflix[i]!='\0'){
    
    if (isoperand(inflix[i])){
        postflix[j++]=inflix[i++];}
        else 
        {
            if(precedence(inflix[i])>precedence( S.s[S.top]){
                push(inflix[i++]);
            }
            else {
                postflix[j++]=pop();
            }
        }


        


    }

}



int main(){
struct Stack S;
cout<<"Enter the size of the Stack"<<endl;
cin>>S.size;
S.s=new int[S.size]; //? Initialize the 's' pointer and allocate memory for it
S.top=-1; //! Make sure to initialise top to -1 here , Very Important 
push(&S,10); //? Make sure to call push or pop by referance 
push(&S,20);
push(&S,30);
push(&S,40);    
pop(&S);
Display(S);
}
