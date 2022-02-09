#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    string s; cin >> s;
    vector<int> cnt(3, 0);

    for(char &c : s) cnt[c - 'A']++;

    cout << (cnt[0] + cnt[2] == cnt[1] ? "YES" : "NO") << '\n';
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