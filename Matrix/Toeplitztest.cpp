#include <iostream>

using namespace std; //!   This is an Ai generated example  code

class ToeplitzMatrix {
private:
  int *A;
  int n;

public:
  ToeplitzMatrix(int n) : n(n), A(new int[2 * n - 1]) {}
  ~ToeplitzMatrix() { delete[] A; }

  void set(int i, int j, int x) {
    int diagonalOffset = n - 1 - abs(i - j);
    A[diagonalOffset] = x;
  }

  int get(int i, int j) {
    int diagonalOffset = n - 1 - abs(i - j);
    return A[diagonalOffset];
  }

  void display() {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        cout << get(i, j) << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  int n;
  cout << "Enter the size of the matrix: ";
  cin >> n;

  ToeplitzMatrix m(n);

  cout << "Enter the elements of the matrix: " << endl;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      int x;
      cin >> x;
      m.set(i, j, x);
    }
  }

  cout << "The matrix is: " << endl;
  m.display();

  return 0;
}
