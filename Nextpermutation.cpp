#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Find the first decreasing element starting from the right
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            int j = n - 1;

            // Find the next greater element from the right
            while (j > i && nums[j] <= nums[i]) {
                j--;
            }

            // Swap the elements at indices i and j
            swap(nums[i], nums[j]);
        }

        // Reverse the remaining elements
        reverse(nums.begin() + i + 1, nums.end());
    }
};


int main()
{
    // Create an instance of the Solution class
    Solution solution;

    // Create a vector of integers
    vector<int> nums = {3, 2, 1};

    // Call the nextPermutation function on the nums vector
    solution.nextPermutation(nums);

    // Display the resulting vector after calling nextPermutation
    cout << "Next Permutation: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
