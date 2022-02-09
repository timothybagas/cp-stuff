#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = (int)1e9;

void task() {
    string s; cin >> s;
    int n = (int)s.length();

    vector<int> d[10];
    int ans = INF;

    for(int i = 0; i < n; i++)
        d[s[i] - '0'].push_back(i);

    for(int i = 0; i < n; i++) {
        if(s[i] == '2' || s[i] == '7') {
            auto it = upper_bound(d[5].begin(), d[5].end(), i);
            if(it != d[5].end()) ans = min(ans, n - i - 1);
        }
        if(s[i] == '0' || s[i] == '5') {
            auto it = upper_bound(d[0].begin(), d[0].end(), i);
            if(it != d[0].end()) ans = min(ans, n - i - 1);
        }
    }

    cout << ans - 1 << '\n';
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