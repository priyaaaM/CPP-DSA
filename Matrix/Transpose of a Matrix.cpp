// Transpose of a Matrix
// Given a 2D array A, Output the Transpose of this matrix.
// Note: The transpose of a matrix is an operation that flips the matrix over its diagonal, effectively switching the row and column indices of the matrix elements. 
// If you have a matrix A with dimensions m×n (meaning it has m rows and n columns).
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}