#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class lowerTriangularMatrix {
private:
    int  *A;
    int n;
public:  
lowerTriangularMatrix(){  //! The name of this function should be same as name of the class 
    n=2;
    A=new int [2*2+1/2]; // ! Here we are using the formula to calculate the size of array for lower triangular matrix and allocating the memory in heap
}
lowerTriangularMatrix(int n)
{
    this->n=n;
    A=new int [n*(n+1)/2]; //! Here we are using the formula to calculate the size of array for lower triangular matrix and allocating the memory in heap
}
~lowerTriangularMatrix(){
    delete []A; } ///! Do not forget to delete the memory once used 
void set(int i , int j , int x  );
int get(int i , int j );
void display();

};
void lowerTriangularMatrix::set(int i , int j , int x ){
    if(i>=j){
     A[i*(i-1)/2 + j-1]=x; 
    }
}
#include <iostream>

int lowerTriangularMatrix::get(int i , int j ){
    if(i>=j){
      return  A[i*(i-1)/2 + j-1];
    }
    return 0;
}

void lowerTriangularMatrix::display(){
    for(int i=1 ; i<=n ; i++){ //! i & j will be initialised to 1 and i will be smaller than or equal to n just don't write it smaller than n
        for (int j=1 ; j<=n ; j++){  //! Here i will be smaller than or equal to n
        if(i>=j)
            std::cout<< A[i*(i-1)/2 + j-1]<<" ";
        
    else 
    cout<<0<<""; //!!!! Make sure to put "" here to get the result in matrix form or else it will be in line form and make sure you don't give any space betqeen "" , please don't write it as " " there should be no space between ""
    }
     cout<<endl<<""; // ! Make sure to alsso add this space after endl 
     // ! This  endl statement will be enclosed inside first for loop of i and not inside second for loop of j or outside both loops 
    }

}

int main(){
    int d ,x;
 cout<<"Please Enter the Size of the Matrix :"<<endl;
 cin>>d;
cout<<"Please Enter the Elements to be entered :"<<endl;
lowerTriangularMatrix m (d);
for(int i=1 ; i<= d ;i++ ){  //! i & j will be initialised to 1 
for ( int j=1 ; j<=d ; j++){ //! Here i will be smaller than or equal to n 
cin>>x;
m.set(i,j,x);
}
}
m.display(); //! Display function will be outside the for loop
}