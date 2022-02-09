#include "../../../common.hpp"

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> pref(n), suff(n);
        
        pref[0] = nums[0];
        for(int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + nums[i];
        
        suff[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--)
            suff[i] = suff[i + 1] + nums[i];
        
        for(int i = 0; i < n; i++)
            if(pref[i] == suff[i]) return i;
        
        return -1;
    }
};