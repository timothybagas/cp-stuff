#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;
    vector<int> a(n); for(auto &i : a) cin >> i;

    vector<int> b = a;
    sort(b.begin(), b.end());

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(a[j] == b[i]) {
                if(i != j) {
                    for(int k = j; k > i; k--)
                        swap(a[k], a[k - 1]);
                    ans.push_back(vector<int>{i + 1, j + 1, abs(i - j)});
                }
                break;
            }
        }
    }

    cout << (int)ans.size() << '\n';
    for(auto &i : ans) {
        for(auto &j : i) cout << j << ' ';
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