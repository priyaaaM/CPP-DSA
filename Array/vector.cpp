// Vector
// Given N integers, write a program to print:
// middle element if the N odd and is multiple of 3
// first and last element(space separated) if N is even and is multiple of 3.
// else sum of first and last element.

#include <bits/stdc++.h>
using namespace std;

int main() {

  int tests, n, val;
  cin >> tests;

  vector<int> nums;

  while(tests--){
    cin >> n;
    nums.clear();
    for(int i = 0; i < n; i++){
        cin >> val;
        nums.push_back(val);
    }
    if(n % 3 == 0){ // n is multiple of 3
        if(n % 2 == 1) { // n is odd
            cout << nums[n / 2] << endl;
        } else { // n is even 
            cout << nums.front() << " " << nums.back() << endl;
        }
    } else{
        cout << nums.front() + nums.back() << endl;
    }
  }

  return 0;
} 