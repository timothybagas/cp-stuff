#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    string s; cin >> s;
    int n = (int)s.length();

    char c = s[0];
    vector<int> used(n, 0);

    int last = 0;
    used[0] = 1;

    for(int i = 1; i < n; i++) {
        if(c > s[i]) {
            c = s[i];
            used[last] = 0;
            last = i;
            used[i] = 1;
        }
    }

    cout << c << ' ';
    for(int i = 0; i < n; i++)
        if(!used[i]) cout << s[i];
    cout << '\n';
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