// Maximum Subarray Sum
// Given an integer array nums find the subarray with the largest sum, and print its sum.
// Note: A subarray is a contiguous non-empty sequence of elements within an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int maxsum = INT_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++){
                int sum = 0;
                for(int k = i; k<=j; k++){
                    sum+=arr[k];
                }
                maxsum = max(maxsum, sum);
            }
        }
        cout<<maxsum<<endl;
    }
}