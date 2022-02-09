#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> tick(n); for(auto &s : tick) cin >> s;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(tick[i][j] != '*') continue;
            for(int d = k; j + 2*d < m && i + d < n; d++) {
                bool is_tick = 1;
                for(int l = j, r = 0; l <= j + 2*d; l++) {
                    is_tick &= tick[i + r][l] == '*';
                    
                    if(l < j + d) r++;
                    else r--;

                    if(!is_tick) break;
                }
                if(is_tick) {
                    for(int l = j, r = 0; l <= j + 2*d; l++) {
                        vis[i + r][l] = 1;
                        if(l < j + d) r++;
                        else r--;
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(tick[i][j] == '*' && !vis[i][j]) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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