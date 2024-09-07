// Sum Queries
// You are given an array A of length N and M queries.
// Each query consists of two integers a and b.
// For each of these queries yo have to output the sum of all the elements in the range 
// a to b, where a and b are 1-based positions of elements in the array A.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        int sum = 0;
        for(int j=a-1; j<b; j++){
            sum+=arr[j];
        }
        cout<<sum<<endl;
    }

}