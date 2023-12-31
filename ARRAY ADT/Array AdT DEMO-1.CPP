#include <iostream>
using namespace std;

struct Array
{
  int *A;
  int size;
  int length;

};
void displayoutput(struct Array arr) {  // Display function to display the elements of the array
  cout << "The Elements are:";           // struct array arr is passed as a parameter to the function
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.A[i] << " ";
  }
}

int main()     //// Main function should be necessarily present in programme else it will not run 
{
  struct Array arr;
  int n, i;
  cout << "Enter the size of the array:";
  cin >> arr.size;
  arr.A = new int[arr.size];
  arr.length = 0;
  cout << "Enter the no of Elements in the array:";
  cin >> n;
  cout << "Enter all the Elements seperated by space :";
  for (i = 0; i < n; i++)
  {
    cin >> arr.A[i];
  }
  arr.length = n;
  displayoutput(arr);  /// array argument is passed inside displayoutput  function 
}


 