#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;
    vector<int> a(n); for(auto &i : a) cin >> i;

    deque<int> dq;
    dq.push_front(a[0]);

    for(int i = 1; i < n; i++)
        if(dq.front() < a[i])
            dq.push_back(a[i]);
        else
            dq.push_front(a[i]);

    while(!dq.empty()) {
        cout << dq.front() << ' ';
        dq.pop_front();
    }

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