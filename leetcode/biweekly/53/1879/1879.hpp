#include "../../../common.hpp"

const int INF = (int)2e9;

class Solution {
public:
    vector<int> a, b;
    int dp[16][(1 << 16)];
    int n;
    
    int memo(int i, int mask) {
        if(i == n) return 0;
        if(dp[i][mask] != INF) return dp[i][mask];
        
        for(int j = 0; j < n; j++) {
            if(mask & (1 << j)) continue;
            dp[i][mask] = min(dp[i][mask], (a[i] ^ b[j]) + memo(i + 1, mask | (1 << j)));
        }
        
        return dp[i][mask];
    }
    
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        a = nums1; b = nums2;
        n = (int)nums1.size();
        
        for(auto &i : dp)
            for(auto &j : i) j = INF;
        
        return memo(0, 0);
    }
};