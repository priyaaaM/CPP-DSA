// Counting Pretty Numbers
// Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 3 or 9.
// Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range.
//  Can you help him?
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n,k;
cin>>n>>k;
int arr[n],prefix[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

prefix[0]=0;
prefix[1]=arr[0];
for(int i=0;i<=n;i++){
prefix[i]=prefix[i-1]+arr[i-1];
}
int sum=0,count=0;
for(int si=0;si<n;si++){
    for(int ei=si;ei<n;ei++){
        sum=prefix[ei+1]-prefix[si];
        if(sum==k){
            count++;
        }
    }
}
cout<<count<<endl;

}