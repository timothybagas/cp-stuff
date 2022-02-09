#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NMX = (int)4e5+5;
vector<int> adj[NMX];
int vis[NMX], deg[NMX];

void task() {
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        adj[i].clear();
        vis[i] = 0;
        deg[i] = 0;
    }

    for(int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        deg[u]++; deg[v]++;
    }

    if(n == 1 || n == 2) {
        cout << "0\n";
        return;
    }

    queue<pair<int, int>> q;

    for(int i = 1; i <= n; i++)
        if((int)adj[i].size() == 1) {
            q.push(make_pair(i, 1));
        }

    int ans = n;

    while(!q.empty()) {
        auto cur = q.front();
        int v = cur.first, p = cur.second;
        q.pop();

        if(p > k) break;
        if(vis[v]) continue;

        vis[v] = 1;
        deg[v]--; ans--;

        for(auto &to : adj[v]) {
            deg[to]--;
            if(!vis[to] && deg[to] == 1)
                q.push(make_pair(to, p + 1));
        }
    }

    cout << ans << '\n';
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