// Search an element in an array
// You are given an array A of size Nand an element X
// Your task is to find whether the array Acontains the element X or not.
#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    bool found = false; // Flag to indicate if X is found
    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        if (element == X) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
