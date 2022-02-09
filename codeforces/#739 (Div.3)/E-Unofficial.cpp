#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    string s; cin >> s;
    int n = (int)s.length();

    string rem = "";
    vector<int> seen(26, 0);

    for(int i = n - 1; i >= 0; i--) {
        if(!seen[s[i] - 'a']) {
            rem += s[i];
            seen[s[i] - 'a'] = 1;
        }
    }

    reverse(rem.begin(), rem.end());
    int m = (int)rem.length();

    vector<int> cnt(26, 0);
    for(auto &c : s) ++cnt[c - 'a'];

    vector<int> new_cnt(26, 0);
    string ans = "";

    for(int i = 0, j = 0; i < n && j < m; ) {
        if((j + 1)*new_cnt[rem[j] - 'a'] == cnt[rem[j] - 'a']) {
            ++j;
        } else {
            ++new_cnt[s[i] - 'a'];
            ans += s[i++];
        }
    }

    for(int i = 0; i < m; i++) {
        if((i + 1)*new_cnt[rem[i] - 'a'] != cnt[rem[i] - 'a']) {
            cout << "-1\n";
            return;
        }
    }

    string last = ans;
    int pos = (int)ans.length();

    for(int i = 0; i < m; i++) {
        string cur = "";
        for(auto &c : last) if(c != rem[i]) cur += c;

        int len = (int)cur.length();

        if(cur != s.substr(pos, len)) {
            cout << "-1\n";
            return;
        }

        pos += len;
        last = cur;
    }

    cout << ans << ' ' << rem << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        task();
    }
    return 0;
}