#include "../../../common.hpp"

const int NMX = 2005;

class LockingTree {
    int n;
    vector<int> locked, par;
    vector<int> adj[NMX];
    
    bool dfs1(int cur) {
        if(locked[cur] != -1) return 1;
        bool a = 0;
        for(auto &to : adj[cur]) {
            if(to == par[cur]) continue;
            a |= dfs1(to);
            
            if(a) break;
        }
        return a;
    }
    
    void dfs2(int cur) {
        locked[cur] = -1;
        for(auto &to : adj[cur]) {
            if(to == par[cur]) continue;
            dfs2(to);
        }
    }
public:
    LockingTree(vector<int>& parent) {
        n = (int)parent.size();
        par = parent;
        for(int i = 1; i < n; i++) {
            adj[i].push_back(parent[i]);
            adj[parent[i]].push_back(i);
        }
        locked.resize(n, -1);
    }
    
    bool lock(int num, int user) {
        if(locked[num] != -1) return 0;
        locked[num] = user;
        return 1;
    }
    
    bool unlock(int num, int user) {
        if(locked[num] == user) {
            locked[num] = -1;
            return 1;
        }
        return 0;
    }
    
    bool upgrade(int num, int user) {
        if(locked[num] != -1) return 0;
        
        // ancestors
        for(int i = num; i != -1; i = par[i])
            if(locked[i] != -1) return 0;
        
        if(dfs1(num)) {
            dfs2(num);
            locked[num] = user;
            return 1;
        }
        return 0;
    }
};