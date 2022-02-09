#include "../../../common.hpp"

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m = (int)points.size(), n = (int)points[0].size();
        
        vector<vector<long long>> dp(m, vector<long long>(n, 0));
        
        for(int i = 0; i < n; i++) dp[0][i] = 1LL * points[0][i];
        
        for(int i = 1; i < m; i++) {
            long long cur = 0;
            for(int j = 0; j < n; j++) {
                cur = max(cur, dp[i - 1][j]);
                dp[i][j] = max(dp[i][j], points[i][j] + cur--);
            }
            cur = 0;
            for(int j = n - 1; j >= 0; j--) {
                cur = max(cur, dp[i - 1][j]);
                dp[i][j] = max(dp[i][j], points[i][j] + cur--);
            }
        }
        
        return *max_element(dp[m - 1].begin(), dp[m - 1].end());
    }
};