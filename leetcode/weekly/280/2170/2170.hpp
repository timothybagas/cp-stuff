#include "../../../common.hpp"

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = (int)nums.size();
        if(n == 1) return 0;
        if(n == 2) return int(nums[0] == nums[1]);
        if(n == 3) return int(nums[0] != nums[2]) + int(nums[1] == nums[0] || nums[1] == nums[2]);
        
        int max_val = 1;
        for(int i : nums) max_val = max(max_val, i);
        
        vector<int> cnt1(max_val + 1, 0), cnt2(max_val + 1, 0);
        
        for(int i = 0; i < n; i++) {
            if(i & 1)
                cnt2[nums[i]]++;
            else
                cnt1[nums[i]]++;
        }
        
        vector<int> sort1(max_val + 1), sort2(max_val + 1);
        iota(sort1.begin(), sort1.end(), 0);
        iota(sort2.begin(), sort2.end(), 0);
        
        sort(sort1.begin(), sort1.end(), [&](int i, int j) {
            return cnt1[i] < cnt1[j];
        });
        sort(sort2.begin(), sort2.end(), [&](int i, int j) {
            return cnt2[i] < cnt2[j];
        });
        
        if(sort1.back() != sort2.back())
            return n - cnt1[sort1.back()] - cnt2[sort2.back()];
        
        int ans1 = cnt1[sort1.back()], ans2 = cnt2[sort2.back()];
        sort1.pop_back(); sort2.pop_back();
        
        ans1 += cnt2[sort2.back()]; ans2 += cnt1[sort1.back()];
        return n - max(ans1, ans2);
    }
};