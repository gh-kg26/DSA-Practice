#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> zeroRows;
        unordered_set<int> zeroCols;

        // Find all zero elements and store their row and column indices
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    zeroRows.insert(i);
                    zeroCols.insert(j);
                }
            }
        }

        

        // Set entire rows to zero
        for (int row : zeroRows) {
            for (int j = 0; j < matrix[row].size(); j++) {
                matrix[row][j] = 0;
            }
        }

        // Set entire columns to zero
        for (int col : zeroCols) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][col] = 0;
            }
        }
    }
};

int main() {
    // Create a sample matrix
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

    // Create an instance of the Solution class
    Solution solution;

    // Call the setZeroes function on the matrix
    solution.setZeroes(matrix);

    // Print the modified matrix
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
