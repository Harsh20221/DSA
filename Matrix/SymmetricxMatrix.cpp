#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class Symmetric {
private:
    int *A;
    int n;

public:
Symmetric(){
    n=2; // Update the value of n
    A=new int[n*(n+1)/2];  // Allocate memory for the symmetric matrix

}
Symmetric(int n ){
this->n=n;
A=new int [n*(n+1)/2]; // Allocate memory for the symmetric matrix
}
 ~Symmetric(){   //! Don't forget to delete once the memory is used 
    delete []A;
 }
void set  (int i , int j , int x );
int get ( int i , int j  );
void display();
};

void Symmetric::set( int i , int j , int x ){
if ( i>=j){
    A[i*(i-1)/2 + j-1]=x;
}
}
int Symmetric::get(int i , int j ){
    if( i>=j){
        return A[i*(i-1)/2 + j-1];
    }
    else 
    return 0;
}

void  Symmetric:: display(){
for ( int i=1 ; i<=n ; i++){
    for ( int j=1 ; j<=n ;  j++){ 
        if(i>=j){
         cout<<A[i*(i-1)/2 + j-1]<<" ";}  //! Remember this syntax to print the symmetric matrix
         else
         cout<<A[j*(j-1)/2 + i-1]<<" ";
    }
cout<<endl;

}
}
 
 int main(){
        int n , x;
        cout<<"Please Enter the Size of the Matrix :"<<endl;
        cin>>n;
        cout<<"Please Enter the Elements to be entered :"<<endl;
        Symmetric m (n);
        for ( int i=1 ; i<=n ; i++){
            for ( int j=1 ; j<=n ; j++){
                cin>>x;
                m.set(i , j , x);
            }
        }
        cout<<"The Matrix is :"<<endl;
        m.display();
        return 0;
 }


