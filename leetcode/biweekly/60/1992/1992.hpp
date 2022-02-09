#include "../../../common.hpp"

class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = (int)land.size();
        int m = (int)land[0].size();
        
        vector<vector<int>> ans, vis(n, vector<int>(m, 0));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(vis[i][j] || land[i][j] != 1) continue;
                int r = 0, c = 0;
                for(int x = i; x < n && land[x][j]; x++) {
                    for(int y = j; y < m && land[x][y]; y++) {
                        c = max(c, y);
                        vis[x][y] = 1;
                    }
                    r = max(r, x);
                }
                ans.push_back(vector<int>{i, j, r, c});
            }
        }
        
        return ans;
    }
};