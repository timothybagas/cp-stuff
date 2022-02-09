#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << max(0, max(b, c) + 1 - a) << ' ' << max(0, max(a, c) + 1 - b) << ' ' << max(0, max(a, b) + 1 - c) << '\n';
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