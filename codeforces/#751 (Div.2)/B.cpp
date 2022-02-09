#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;
    vector<int> a(n); for(auto &i : a) cin >> i;

    vector<vector<int>> steps;
    steps.push_back(a);
    
    auto transform_arr = [](vector<int> &a, vector<int> &occ) {
        int n = (int)a.size();
        for(int i = 0; i < n; i++) a[i] = occ[a[i]];
    };

    while(1) {
        vector<int> occ(n + 1, 0);
        for(int i = 0; i < n; i++) occ[a[i]]++;
        transform_arr(a, occ);

        if(a == steps.back()) break;
        steps.push_back(a);
    }

    int m = (int)steps.size();
    int q; cin >> q;

    while(q--) {
        int x, k;
        cin >> x >> k;

        k = min(k, m - 1);
        cout << steps[k][x - 1] << '\n';
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