#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;
    map<int, int> a;

    for(int i = 0; i < n; i++) {
        int d; cin >> d;
        a[d] = i;
    }

    int min_val = INT_MAX;

    for(auto it = a.begin(); it != a.end(); it++) {
        it->second = min(it->second, min_val);
        min_val = it->second;
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        int d; cin >> d;
        auto it = a.lower_bound(d);
        --it;

        ans = min(ans, i + it->second);
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