#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Element
{
    int i;
    int j;
    int x;
};
struct  Sparse {
    int m;
    int n;
    int num;
    struct Element *e;
};

void create(struct Sparse* S) {
    cout << "Enter the dimensions of the matrix sepereted by space : ";
    cin >> S->m >> S->n;
    cout << "Enter the number of non-zero elements: ";
    cin >> S->num;
    S->e = new Element[S->num];  //! Dynamically allocating memory for the array of elements remember the syntax for this , Make sure to use the arrow operator to access the members of the structure
    cout <<"Enter all Non-Zero Elements like this { Row No  Column No  Elements Value} in each line  : "<<endl;
    for ( int i=0 ; i<S->num ; i++ ){  //! Here the limit of iterator will be i < S->num because num is the no of non zero elements
        cin>>S->e[i].i >>S->e[i].j >> S->e[i].x ;
    }
}

void Display(struct Sparse *S){ 
    int i=0, j=0, k=0; // !Initialize i and j to 0  like this only and not like int i,j=0; because it will only initialize j to 0 and not i
    for ( i ; i<S->m ; i++) { //! Make sure to define it as i smaller than S->m because m is the no of rows and n is the no of columns
        for ( j ; j<S->n; j++){  //! Make sure to define it as j smaller than S->n because m is the no of rows and n is the no of columns
            if(i==S->e[k].i && j==S->e[k].j ){  //*In `i==S->e[k].i`, it's checking if the value of `i` is equal to the `i` value of the `k`th element in the `e` array of the `S` object. The `->` operator is used to access members of an object through a pointer. Here, `S` is presumably a pointer to an object that has a member `e`, which is an array. Each element of this array is an object that has a member `i`
                //?Similarly, in `j==S->e[k].j`, it's checking if the value of `j` is equal to the `j` value of the `k`th element in the `e` array of the `S` object.
                cout << S->e[k++].x << " ";  // ! Please Remember the syntax to print them or else you'll get errors 
            }
            else {
                cout<<"0 ";  //! Make sure to display the 0's as well like how it's done here 
            }
        }
        cout<< " \n";  
    }  
}

int main(){

    struct Sparse S;  //? Declaring a structure variable
    create(&S);  //! Call by reference
    Display(&S);
    return 0;
}