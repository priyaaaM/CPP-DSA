// Find maximum in an Array
// Given a list of N integers, representing height of mountains. 
// Find the height of the tallest mountain.
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
        int maximum = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]>maximum) maximum = arr[i];
        }
        cout<<maximum<<endl;
    }
}