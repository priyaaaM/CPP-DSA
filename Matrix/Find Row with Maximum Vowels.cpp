// Find Row with Maximum Vowels
// You are given a grid of lowercase English characters with R rows and C columns. 
// Your task is to find the row with the maximum number of vowels.
// If two rows have the same maximum number of vowels, return the smaller row number.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int maximum = 0, index;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<m; j++){
            if(
                arr[i][j]=='a' ||
                arr[i][j]=='e' ||
                arr[i][j]=='i' ||
                arr[i][j]=='o' ||
                arr[i][j]=='u' 
            )
            {
                count++;
            }
            
        }
        if(count>maximum){
            maximum = count;
            index = i;
        }
    }
    cout<<index+1<<endl;
}