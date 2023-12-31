#include <iostream>        
#include <stdio.h>
using namespace std;
 int main() { //// 0 ROw  // 1 row // 2 row 
    int A[3][3]={{1,3,4},{2,4,6},{3,4,5}};
    cout<<A[1][2]<<endl;  /// Output is 6 because we have specified  [1] and [2]  which means second row as it starts from 0 and and third column as it also  starts from 0
    
    for (int i=0;i<3;i++){  /// i is for row   // This is for printing the 2D array
        for (int j=0;j<3;j++){  /// j is for column  // We print 2-D array by using two for loops
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
 cout<<A<<endl; /// This will print the address of the first element of the array
    cout<<&A[0]<<endl; /// This will also  print the address of the first element of the array

    
 }