#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename T>T gcd(T a, T b) {
    while(b) {
        a %= b; swap(a, b);
    }
    return a;
}

void task() {
    int n; cin >> n;
    vector<int> a(n); for(auto &i : a) cin >> i;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++)
            ans = gcd(ans, abs(a[i] - a[j]));
    }

    cout << (!ans ? -1 : ans) << '\n';
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