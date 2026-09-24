#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop through each row from 1 to N
    for (int row = 1; row <= N; row++) {
        // Loop through each column from 1 to N
        for (int col = 1; col <= N; col++) {
            
            // Print '*' if it's the first row, last row, first column, or last column
            if (row == 1 || row == N || col == 1 || col == N) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Move to the next line after finishing a row
        cout << endl;
    }

    return 0;
}
