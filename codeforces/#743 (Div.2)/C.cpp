#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NMX = (int)2e5+5;
vector<int> adj[NMX];
int p[NMX], vis[NMX], col[NMX], flag;

void dfs(int v) {
    vis[v] = col[v] = 1;
    for(auto &to : adj[v]) {
        if(col[to] == 1 || flag) {
            flag = 1; return;
        }
        if(!vis[to]) dfs(to);
        p[v] = max(p[v], p[to] + int(v < to));
    }
    p[v] = max(p[v], 1);
    col[v] = 2;
}

const int INF = (int)2e9;

void task() {
    int n; cin >> n;

    flag = 0;
    for(int i = 0; i < n; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {
            int v; cin >> v; --v;
            adj[i].push_back(v);
        }
    }

    for(int i = 0; i < n; i++)
        if(!vis[i] && !adj[i].empty()) dfs(i);

    int ans = 1;
    if(flag) ans = INF;

    for(int i = 0; i < n; i++) {
        ans = max(ans, p[i]);
        adj[i].clear();
        vis[i] = p[i] = col[i] = 0;
    }

    cout << (ans == INF ? -1 : ans) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef LOCAL_DEFINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif

    int tc; cin >> tc;
    while(tc--) {
        task();
    }
    return 0;
}