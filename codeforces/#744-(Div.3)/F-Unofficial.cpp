#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n); for(auto &i : a) cin >> i;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i]) continue;
        int cnt = 0;
        for(int j = i; a[(j + d) % n]; (j += d) %= n) {
            cnt++; a[(j + d) % n] = 0;
        }
        ans = max(ans, cnt);
    }

    if(accumulate(a.begin(), a.end(), 0))
        ans = -1;

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