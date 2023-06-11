#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int x = 0;

        while (x < nums.size())
        {

            for (int i = x + 1; i < nums.size(); i++)
            {
                if (nums[i] < nums[x])
                {
                    swap(nums[x], nums[i]);
                }
            }
            x++;
        }
    }
};

int main()
{
    // Create a vector of integers representing colors
    vector<int> colors = {2, 0, 2, 1, 1, 0};

    // Create an instance of the Solution class
    Solution solution;

    // Call the sortColors function to sort the colors
    solution.sortColors(colors);

    // Print the sorted colors
    for (int color : colors)
    {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}