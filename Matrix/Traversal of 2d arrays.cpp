// Traversal of 2d arrays
// Like a normal array, we can traverse a 2D array of size N, using a loop going through each of its indexes from 0 to N-1. 
// Accessing an index from this array will give us the array at that index.
// Now, we can use another nested loop to traverse through all the inner array elements.
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
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}