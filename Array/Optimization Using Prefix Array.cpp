// Optimization Using Prefix Array
// Given an array of length n, we need to perform m query over the array.
// In each query you need to find the sum of the element in the range a to b.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long pre[n];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = arr[i] + pre[i-1];
    }
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if (a == 0) {
            cout << pre[b] << "\n";
        }
        else {
            cout << (pre[b] - pre[a-1]) << "\n";
        }
    }
    cout << "\n";
}