// Leader of an Array
// Write a program to print all the leaders in the array. 
// An element is a leader if it is strictly greater than all the elements to its right side. 
// And the rightmost element is always a leader.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        bool isLargest = true;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>=arr[i]) isLargest = false;
        }
        if(isLargest) cout<<arr[i]<<" ";
    }
    cout<<endl;
}
