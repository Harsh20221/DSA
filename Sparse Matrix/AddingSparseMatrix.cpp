#include <iostream>
#include<stdio.h>  //! Testing and bug fixing still needs to be done in this code
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

struct Sparse* add(struct Sparse *S1, struct Sparse *S2){  //! In order to use this function we need to create two matrices in main function and then pass them as arguments to this function

    //!!!!! Very important to define this function as struct Sparse *add and not void add because we need to return a pointer to a structure and not void

    struct Sparse *sum;
    int i ; int j ; int k;
    i=j=k=0;
    sum=new Sparse;
    sum->e=new element[S1->num+S2->num]; //? this is how you declare memory in heap using poimnters with a specific size
    while (i<S1->num && j<S2->num){  
        if(S1->e[i].i<S2->e[j].i){//* We are iterating through list 1 using i and list 2 using j that's why we are comparing e[i] with e[j] , and by the use of .i after e[i] we mean the row , if we were to use .j then we would have specified columns  
            //? Here we are comparing rows to rows 
            sum->e[k++]=S1->e[i++]; }  //! We are copying the smaller element 
        else if (S1->e[i].i>S2->e[j].j ){ //? Here we are comparing rows to rows
            sum->e[k++]=S2->e[j++];
        }
        else if ( S1->e[i].j<S2->e[j].j){//? Here we are comparing rowsto rows
            sum->e[k++]=S1->e[i++];
        }
        else if (S1->e[i].j>S2->e[j].j){ //? Here we are comparing columns  to columns 
            sum->e[k++]=S2->e[j++];
        }
        else if (S1->e[i].j==S2->e[j].j){ //? Here we are comparing columns to columns
            sum->e[k]=S1->e[i];
        }
        else {
            sum->e[k]=S1->e[i];   
            sum->e[k++].x=S1->e[i++].x+S2->e[j++].x;  //? If the value of i and j are equal then we'll add the values of the elements and store it in the sum array
        }
    }
    for(;i<S1->num;i++){   ///? This is how you'll copy the remaining elements using two for loops 
        sum->e[k++]=S1->e[i];
    }
    for(;j<S2->num;j++){///? This is how you'll copy the remaining elements
        sum->e[k++]=S2->e[j];
    }
    return sum;
}

int main (){
    struct Sparse s1; //! We need to create 3 structrures here inside main function to create 3 matrices 
    struct Sparse s2;
    struct Sparse *s3;
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);  
    cout<<"First Matrix"<<endl;
    display(&s1);
    cout<<"Second Matrix"<<endl;
    display(&s2);
    cout<<"Sum Matrix"<<endl;
    display(s3); // ! if we have our s3 as a pointer then we should have display(s3) and not display(&s3) because we are already passing the address of the structure in the add function and we are returning the address of the structure in the add function as well
    return 0;
}
