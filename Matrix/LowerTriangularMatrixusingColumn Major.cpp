#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class lowerTriangularMatrix {
private:
    int *A;
    int n;
public:
    lowerTriangularMatrix(){
        n=2;
        A=new int [2*2+1/2]; // ? The formula  to calculate the size of array for lower triangular matrix is n*(n+1)/2
    }
    lowerTriangularMatrix(int n){       
        this->n=n;
        A=new int [n*(n+1)/2]; // ? The formula  to calculate the size of array for lower triangular matrix is n*(n+1)/2
    }
    ~lowerTriangularMatrix(){
        delete []A; 
    } ///! Do not forget to delete the memory once used

    int setcolumnmajor(int i , int j , int x  );
    int getcolumnmajor(int i , int j );
    void displaycolumnmajor();
};

int lowerTriangularMatrix::setcolumnmajor(int i , int j , int x ){   //! Enter Class Name Here then enter the function Name 
    if (i>=j){
        A[n*(j-1)-(j-2)*(j-1)/2]=x; //? The formula to set the value of lower triangular matrix in column major form is A[n*(j-1) - ((j-2)*(j-1))/2 + (i-j)]
    }
    return 0;
}

int lowerTriangularMatrix::getcolumnmajor(int i , int j ){  
    if ( i>=j){
        return A[n*(j-1)-(j-2)*(j-1)/2]; //? The formula to get the value of lower triangular matrix in column major form is A[n*(j-1) - ((j-2)*(j-1))/2 + (i-j)]
    }
    else
        return 0;
}

void lowerTriangularMatrix::displaycolumnmajor(){
    for ( int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(i>=j){
                cout<<A[n*(j-1)-(j-2)*(j-1)/2]<<" ";
            }
            else 
                cout<<"0 "<<"";
        }
        cout<<endl<<"";
    }
}

int main (){
    int n ; int x;
    cout<<"Please Enter the Size of the Matrix :"<<endl;
    cin>>n;
    cout<<"Please Enter the element that you want to insert "<<endl;
    lowerTriangularMatrix m(n);
    for(int i=1 ; i<=n; i++){
        for ( int j=1 ; j<=n ; j++){
            cin>>x;
            m.setcolumnmajor(i,j,x );
        }
    }
    m.displaycolumnmajor();
}





