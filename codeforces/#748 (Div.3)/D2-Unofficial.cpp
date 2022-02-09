#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma,mmx,tune=native")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NMX = (int)2e6+5;
int a[45], b[45], cnt[NMX];

void task() {
    int n; cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 1;

    for(int m = NMX; m >= 2 && ans == 1; m--) {
        for(int i = 0; i < n; i++) {
            b[i] = a[i] % m;
            if(b[i] < 0) b[i] += m;

            cnt[b[i]]++;
            if(cnt[b[i]] >= n/2) ans = m;
        }
        for(int i = 0; i < n; i++) cnt[b[i]]--;
    }

    if(ans == NMX) ans = -1;
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