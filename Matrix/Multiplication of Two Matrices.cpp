// Multiplication of Two Matrices
// Matrix multiplication involves combining the rows of the first matrix with the columns of the second matrix to produce a new matrix.
// Specifically, let's say we have two matrices A and B, where A has dimensions M x N (M rows, N columns), and B has dimensions N x P (N rows, P columns). 
// The resulting matrix C from the multiplication, denoted as C = A * B, will have dimensions M x P.
#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n, p;
  cin >> m >> n;
  int a[m][n];
  int _n = n;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
       cin >> a[i][j];
    }
  }
  cin >> n >> p;
  assert(_n == n);
  int b[n][p];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
       cin >> b[i][j];
    }
  }
  
  int mul[m][p];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
        mul[i][j] = 0;
        for (int k = 0; k < n; k++) {
            mul[i][j] += a[i][k] * b[k][j];
        }
        cout << mul[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
} 