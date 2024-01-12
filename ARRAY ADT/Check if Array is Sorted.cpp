#include <iostream>
#include <stdio.h>
#include <stdlib.h>   
using namespace std;
struct Array {
    int A[10];
    int length;   //? example array [1,2,3,4,5,6,7,8,9]  
};

int CheckIfArrayissorted(struct Array &arr , int n) //? n is the length of the array
{
for (int i = 0; i < n-1; i++)   //? We Write n-1 here because if let's say the length is 10 then the last element will be at 9th index 
{
if (arr.A[i]>arr.A[i-1])
return false; 


}

     
return true;

}

int main()
{
    struct Array arr = {{1,2,3,4,5,6,7,8,9},10};
    cout<<CheckIfArrayissorted(arr,10);
    return 0;
}