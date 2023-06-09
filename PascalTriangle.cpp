#include<iostream>
#include<vector>

using namespace std;

vector<int> generaterows(int row){
    
    
    long long res = 1;
    vector<int> ans;
    
    ans.push_back(1);
    for(int i = 1; i < row; i++){
        res = res * (row - i);
        res = res/i;
        ans.push_back(res);
    }

    return ans;
   

}


class Solution {
public:
    vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;

    for(int i = 1; i <= numRows; i++){

        ans.push_back(generaterows(i));


    }

    return ans;

    }
};




int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    Solution solution;
    vector<vector<int>> pascalTriangle = solution.generate(numRows);

    // Print the Pascal's triangle
    cout << "Pascal's triangle:" << endl;
    for (const auto& row : pascalTriangle) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}