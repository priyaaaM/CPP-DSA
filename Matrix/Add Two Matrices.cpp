// Given two matrices of same size M x N, add them and print the resultant matrix.
// Let's say we have two matrices A and B of the same dimensions (M x N).
//  The sum of these two matrices, denoted as C = A + B, is another matrix of the same dimensions where each element C[i][j] is the sum of the corresponding elements A[i][j] and B[i][j].
#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n;
  cin >> n >> m;

  int a[n][m], b[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cin >> b[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cout << a[i][j] + b[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
} 