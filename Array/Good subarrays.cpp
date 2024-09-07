// Good subarrays
// Good subarrays
// You are given an array a1,a2, . . .,an consisting of n integers.
// A subarray al,al+1,al+2, . . .,ar-1,ar is good if the sum of elements of this subarray is equal to an integer k.
// Find the number of good subarrays present in the array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pre[n];
    pre[0] = arr[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int count = 0;
    for(int si = 0; si<n; si++){
        for(int ei = si; ei<n; ei++){
            int sum;
            if(si==0) sum = pre[ei];
            else sum = pre[ei] - pre[si-1];
            if(sum == k) count++;
        }
    }
    cout<<count<<endl;
}