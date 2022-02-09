#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> nums[2];

void gen(ll a, ll b, ll val, ll mult) {
    if(mult == 0) {
        nums[a != b].push_back(val);
        return;
    }
    for(int i = 0; i < 2; i++)
        gen(a, b, val + mult*(i ? a : b), mult/10);
}

void task() {
    ll n; int k;
    cin >> n >> k;

    if(k == 1) {
        cout << *lower_bound(nums[0].begin(), nums[0].end(), n) << '\n';
        return;
    }

    ll ans = LLONG_MAX;
    for(int i = 0; i < 2; i++)
        ans = min(ans, *lower_bound(nums[i].begin(), nums[i].end(), n));

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(ll i = 0; i <= 9; i++) {
        for(ll j = i; j <= 9; j++) {
            ll p = 1;
            for(int len = 0; len <= 10; len++) {
                gen(i, j, 0, p);
                p *= 10;
            }
        }
    }

    for(auto &num : nums)
        sort(num.begin(), num.end());

    int t; cin >> t;
    while(t--) {
        task();
    }
    return 0;
}