#include "../../../common.hpp"

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        
        for(int i = 0; i + 1 < n; i += 2)
            swap(nums[i], nums[i + 1]);
        
        return nums;
    }
};