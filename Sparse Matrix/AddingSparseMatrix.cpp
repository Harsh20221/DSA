#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct element {
    int i ; //? Row No
    int j ; //? Column No
    int x ; //? Element Value

};
struct Sparse {   
    int m ;//? No of Rows
    int n ;//? No of Columns
    int num ;//? No of Non-Zero Elements
    struct element *e ; //? Pointer to an array of elements
};
void create ( struct Sparse *S){
    cout<<"Enter The Dimensions of the Matrix in the mxn format seperated by space , do not write x in between:"<<endl;
    cin>>S->m>>S->n;
    cout<<"Enter the number of Non Zero elements  that you want in your element "<<endl;
    cin>>S->num;

S->e=new element[S->num]; //? use square brackets oonly here 
for(int i=0;i<S->num ; i++){
    cout<<"enter all Non-Zero Elements like this { Row No  Column No  Elements Value "<<endl;
cin>>S->e[i].i>>S->e[i].j>>S->e[i].x; //! Remember the syntax to access the members of the structure 
}
}

void display(struct Sparse *S) {
    int i=0 ; int j=0 ; int k=0;
    for (i=0 ; i<S->m;i++){  //! We'll seperately display rows and columns of the sparse matrix 
    for(j=0;j<S->n;j++){
if( i==S->e[k].i && j==S->e[k].j){
  cout<<S->e[k++].x<<endl;
}
else {
    cout<<"0 ";  //? Remember this is how you'll pringt this 

}

    }
    
    cout<<" \n";} //? Rememember this is how you'll print this 
}

int main (){
    struct Sparse s; //! Don't use a pointer here
    create(&s);
    display(&s);
}


