#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minele = INT_MAX;
        int final = 0;
        int maxprof = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minele){
                minele = prices[i];
            }
            maxprof = prices[i] - minele;
            if(final < maxprof){
                final = maxprof;
            }
        }
        return final;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {3,2,6,5,0,3};

    int maxProfit = solution.maxProfit(prices);

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
