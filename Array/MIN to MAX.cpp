// MIN To MAX

// You are given an array A of size N.

// Let M be the minimum value present in the array initially.
// In one operation, you can choose an element 
// Ai(1≤i≤N) and an integer X (1≤X≤100), and set Ai=X.

// Determine the minimum number of operations required to make M the maximum value in the array A.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int minimum = a[0];
        for(int i=0;i<n;i++){
            minimum = min(a[i], minimum);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i] == minimum) count++;
        }
        cout<<n-count<<endl;
        
    }

}