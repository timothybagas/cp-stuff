#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;

    for(int i = 0; i < n; i++)
        if(s[i] != '0') ans += int(s[i] - '0') + (i != n - 1);

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