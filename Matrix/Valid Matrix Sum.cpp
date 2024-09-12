// Valid Matrix Sum
// You are given an integer n and m, representing the dimensions of an n×mmatrix. 
// You need to construct an n×m matrix such that the following properties are satisfied:
// 1.Each element in the matrix is 1.
// 2.The sum of the elements of the matrix is even.

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the total number of elements
    int total_elements = n * m;

    // Check if the total number of elements is even
    if (total_elements % 2 != 0) {
        cout << -1 << endl;
    } else {
        // Construct the n x m matrix filled with 1s
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}