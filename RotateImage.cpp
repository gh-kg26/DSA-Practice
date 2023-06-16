#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        vector<vector<int>> copy(n, vector<int>(n));
        

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

               
                copy[j][n - 1 - i] = matrix[i][j];
                
               
                
            }
            
        }

        matrix = copy;
        
    }
};

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    Solution solution;
    solution.rotate(matrix);
    
    // Print the rotated matrix
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
