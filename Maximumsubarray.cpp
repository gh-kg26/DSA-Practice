#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_subarray = INT_MIN;
        int min_subarray = 0;
        int n = nums.size();


        for(int i = 0; i < n; i++){

            min_subarray = max(min_subarray + nums[i], nums[i]);
            max_subarray = max(min_subarray, max_subarray);
        }

        return max_subarray;

        
    }
};

int main() {
    Solution solution;

    // Create a vector with some example numbers
    vector<int> nums = {1};

    // Call the maxSubArray function and store the result
    int result = solution.maxSubArray(nums);

    // Print the result
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}