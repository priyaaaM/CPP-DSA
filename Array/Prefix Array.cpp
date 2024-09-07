// Prefix Array
// A prefix array is a special array that we can generate from any numerical type array(integers, floats, double).
// The value at each index in the prefix array is the sum of all the elements up to and including that index in the original array.
// So considering P is a prefix array and  A is the original array. Then for each index i in P
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pre[n];
    pre[0] = arr[0];
    for(int i=1; i<n; i++){
        pre[i] = arr[i] + pre[i-1];
    }
    for(int i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
}