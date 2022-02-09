#include "../../../common.hpp"

class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans = 0, n = (int)rungs.size();
        int last = 0;
        
        for(int i = 0; i < n; i++) {
            if(rungs[i] - dist > last) {
                ans += (rungs[i] - last - 1) / dist;
            }
            last = rungs[i];
        }
        
        return ans;
    }
};