#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> solve(int start, int end) {
    vector<int> ans;
    assert((end - start + 1) & 1);
    for(int i = start; i + 2 <= end; i += 2)
        ans.push_back(i);
    for(int i = end - 4; i >= start; i -= 2)
        ans.push_back(i);
    return ans;
}

vector<int> merge(vector<int> a, vector<int> b) {
    for(auto &i : b) a.push_back(i);
    return a;
}

void task() {
    int n; cin >> n;
    vector<int> a(n + 1);

    int x = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i]; x ^= a[i];
    }

    if(x) {
        cout << "NO\n";
        return;
    }

    vector<int> ans;

    if(n & 1)
        ans = solve(1, n);
    else {
        x = 0;
        for(int i = 1; i <= n - 1; i += 2) {
            x ^= a[i];
            if(!x) {
                ans = merge(solve(1, i), solve(i + 1, n));
                break;
            }
            x ^= a[i + 1];
        }
    }

    if(ans.empty()) {
        cout << "NO\n";
        return;
    }

    int m = (int)ans.size();

    cout << "YES\n" << m << '\n';
    for(int i = 0; i < m; i++)
        cout << ans[i] << " \n"[i == m - 1];
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