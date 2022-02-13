#include "../../../common.hpp"

class Solution {
public:
    vector<int> a;
    int dp[20][(1 << 19)], slot[20];
    int n, slots;
    
    int memo(int i, int mask) {
        if(i == n) return 0;
        if(dp[i][mask]) return dp[i][mask];
        
        for(int j = 0; j < slots; j++) {
            if(slot[j] == 2) continue;
            slot[j]++;
            int p = j + slots*(slot[j] - 1);
            dp[i][mask] = max(dp[i][mask], (a[i] & (j + 1)) + memo(i + 1, mask | (1 << p)));
            slot[j]--;
        }
        
        return dp[i][mask];
    }
    
    int maximumANDSum(vector<int>& nums, int numSlots) {
        a = nums;
        n = (int)nums.size();
        slots = numSlots;
        return memo(0, 0);
    }
};