#include <iostream>
using namespace std; /// ! This code is not working properly , it needs to be fixed
class ToeplitzMatrix {
    private:
        int *A;
        int n;
    public:
     ToeplitzMatrix(){
        n=2 ;
        A=new int[2*n-1] ;
     }
     ToeplitzMatrix(int n){
       A=new int[2*n-1];
     }
     ~ToeplitzMatrix(){
        delete []A;
     }
    void set ( int i , int j , int x );
    int get ( int i , int j );
    void display();
};
void ToeplitzMatrix::set(int i , int j ,int x ){
    if(i<=j){
        A[j-1]=x;
    }
    else if (i>j){
        A[n+j-i-1]=x;
    }
}
int ToeplitzMatrix::get( int i , int j ){
if(i<=j){
 return  A[j-1];
}
else if (i>j){
   return A[n+j-i-1] ;
}
else  
return 0;
}
void ToeplitzMatrix::display(){
    for(int i= 1 ; i<=n ; i++){
        for ( int j=1 ; j<=n ; j++){
            if(i<=j ){
                cout<<A[j-1]<<"";
            }
            else if ( i>j)
                cout<<A[n+j-i-1]<<" ";
            else 
                cout<<"0 "<<"";
        }
        cout<<endl;
    }
}

int main(){
    int n , x;
    cout<<"Please Enter the Size of the Matrix :"<<endl;
    cin>>n;
    cout<<"Please Enter the Elements to be entered :"<<endl;
    ToeplitzMatrix m (n);
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


