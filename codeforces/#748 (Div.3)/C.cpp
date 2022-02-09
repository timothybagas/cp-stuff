#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n, k;
    cin >> n >> k;

    vector<int> a(k); for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());

    int ans = 0;
    ll total_moves = 0;

    for(int i = k - 1; i >= 0; i--) {
        if(total_moves < (ll)a[i]) ans++;
        else break;
        total_moves += (ll)n - a[i];
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