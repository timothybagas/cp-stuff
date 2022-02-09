#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void task() {
    int n; cin >> n;
    vector<int> a(n); for(auto &i : a) cin >> i;

    vector<ll> ans = {0, 0};
    ordered_set<int> s, t;

    for(int i = 0; i < n; i++) {
        ll x = min(ans[0], ans[1]) + s.order_of_key(a[i]);
        ll y = min(ans[0], ans[1]) + t.order_of_key(-a[i]);
        ans = {x, y};
        s.insert(a[i]); t.insert(-a[i]);
    }

    cout << min(ans[0], ans[1]) << '\n';
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