#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
    int n; cin >> n;

    vector<int> a;
    map<int, int> mp;
    priority_queue<pair<int, int>> pq;

    for(int i = 0, j = 0; i < n; i++) {
        int d; cin >> d;
        if(d) {
            mp[j] = i;
            a.push_back(d);
            pq.push(make_pair(d, j++));
        }
    }

    n = (int)a.size();

    if(n <= 1) {
        cout << "0\n";
        return;
    }

    vector<int> sorted_a(n);

    iota(sorted_a.begin(), sorted_a.end(), 0);
    sort(sorted_a.begin(), sorted_a.end(), [&](int &i, int &j) {
        return a[i] < a[j];
    });

    vector<int> already(n, 0);
    vector<pair<int, int>> ans;

    for(int j = 0; j + 1 < n; j++) {
        int i = sorted_a[j];

        if(already[i]) continue;
        
        while(a[i] && !pq.empty()) {
            auto cur = pq.top();
            pq.pop();
            int id = cur.second;

            if(i == id) continue;
            if(already[id]) continue;

            a[id]--; a[i]--;
            ans.push_back(make_pair(mp[i] + 1, mp[id] + 1));

            if(a[id])
                pq.push(make_pair(a[id], id));
            else
                already[id] = 1;
        }
        already[i] = 1;
    }

    cout << (int)ans.size() << '\n';
    for(auto &i : ans)
        cout << i.first << ' ' << i.second << '\n';
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