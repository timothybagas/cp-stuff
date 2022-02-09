#include "../../../common.hpp"

const int NMX = (int)1e5;
const int INF = (int)1e9;

class Solution {
    vector<int> adj[NMX];
    vector<int> dist;
    set<pair<int, int>> q;
public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        for(auto &i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        int n = (int)patience.size();
        
        dist.assign(n, INF);
        dist[0] = 0;
        q.insert({0, 0});
        
        while(!q.empty()) {
            int v = q.begin()->second;
            q.erase(q.begin());
            
            for(auto &to : adj[v]) {
                if(dist[v] + 1 < dist[to]) {
                    q.erase({dist[to], to});
                    dist[to] = dist[v] + 1;
                    q.insert({dist[to], to});
                }
            }
        }
        
        int ans = 0;
        
        for(int i = 1; i < n; i++) {
            int d = 2*dist[i] + patience[i]*((2*dist[i] + patience[i] - 1)/patience[i]) - patience[i];
            ans += max(0, d - ans);
        }
        
        return ans + 1;
    }
};