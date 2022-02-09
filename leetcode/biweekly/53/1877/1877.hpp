#include "../../../common.hpp"

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, n = nums.size();
        
        for(int i = n / 2 - 1, add = 1; i >= 0; i--, add += 2)
            ans = max(ans, nums[i] + nums[i + add]);
        
        return ans;
    }
};