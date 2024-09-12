// Sum of Diagonals
// Given a N x N square matrix, find the sum of both primary as well as secondary diagonal elements.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    int sum = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j || i==n-1-j) sum += arr[i][j];
     
    cout<<sum<<endl;
}