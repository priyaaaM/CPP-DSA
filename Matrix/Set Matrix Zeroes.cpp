// Set Matrix Zeroes
// Given an N x M integer matrix, if an element is 0, set its entire row and column to 0's.
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
    int ans[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans[i][j] = arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if( arr[i][j] == 0){
                for(int k = 0; k<n; k++){
                    ans[k][j] = 0;
                }
                for(int k = 0; k<m; k++){
                    ans[i][k] = 0;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}