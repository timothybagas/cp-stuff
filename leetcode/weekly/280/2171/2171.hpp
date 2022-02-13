#include "../../../common.hpp"

class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        
        int n = (int)beans.size();
        long long suff = 0;
        
        for(int i = n - 1; i >= 0; i--) {
            suff = suff + beans[i];
        }
        
        long long ans = LLONG_MAX, pref = 0;
        
        for(int i = 0; i < n; i++) {
            ans = min(ans, suff - 1ll*(n - i)*beans[i] + pref);
            suff = suff - beans[i];
            pref = pref + beans[i];
        }
        
        return ans;
    }
};