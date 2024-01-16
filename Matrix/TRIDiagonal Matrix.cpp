#include <iostream> // ! This code is not working properly , it needs to be fixed
using namespace std;
class TriDiagonalMatrix {
    private:
        int *A;
        int n;
    public:
     TriDiagonalMatrix(){
        n=2 ;
        A=new int(3*(n-2)) ;
     }
     TriDiagonalMatrix(int n){
       A=new int(3*(n-2));
     }
     ~TriDiagonalMatrix(){
        delete []A;
     }
    void set ( int i , int j , int x );
    int get ( int i , int j );
    int display();
};
void TriDiagonalMatrix::set(int i , int j ,int x ){
    if(i-j==1){
        A[i-1]=x;
    }
    else if (i-j==0){
        A[n-1+i-1]=x;
    }
    else if (i-j==-1){
        A[2*n-1]=x;
    }
}

int TriDiagonalMatrix::get( int i , int j ){
if(i-j==1){
 return  A[i-1];
}
else if (i-j==0){
   return A[n-1+i-1] ;
}
else if (i-j==-1){
 return A[2*n-1];
}
else 
return 0;
}

int TriDiagonalMatrix::display(){
    for(int i= 1 ; i<=n ; i++){
        for ( int j=1 ; j<=n ; j++){
            if(i-j==1 ){
                cout<<A[i-1]<<"";
            }
            else if ( i-j==0)
                cout<<A[n-1+i-1]<<" ";
            else if (i-j==-1 )
                cout<<A[2*n-1]<<" ";
            else 
                cout<<"0 "<<"";

        }
        cout<<endl;
    } 
    return 0; // Add a return statement to fix the issue
}
int main(){
    int n , x;
    cout<<"Please Enter the Size of the Matrix :"<<endl;
    cin>>n;
    cout<<"Please Enter the Elements to be entered :"<<endl;
    TriDiagonalMatrix m (n);
    for ( int i=1 ; i<=n ; i++){
        for ( int j=1 ; j<=n ; j++){
            cin>>x;
            m.set(i , j , x);
        }
    }
    m.display();
}