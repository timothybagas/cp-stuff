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

    vector<int> p(31, 0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= 30; j++)
            if(a[i] & (1 << j)) p[j]++;
    }

    int g = 0;
    for(auto &i : p) g = gcd(g, i);

    if(g == 0) {
        for(int i = 1; i <= n; i++)
            cout << i << " \n"[i == n];
    } else {
        vector<int> ans;
        for(int i = 1; i*i <= g; i++)
            if(g % i == 0) {
                ans.push_back(i);
                if(g/i != i) ans.push_back(g/i);
            }
        sort(ans.begin(), ans.end());

        for(auto &i : ans)
            cout << i << ' ';
        cout << '\n';
    }
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