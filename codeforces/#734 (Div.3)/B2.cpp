#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n, k;
	cin >> n >> k;

	map<int, vector<int>> cnt;
	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]].push_back(i);
	}

	vector<int> ans(n, 0), t;

	for(auto &i : cnt) {
		if((int)i.second.size() >= k) {
			for(int j = 0; j < k; j++) ans[i.second[j]] = j + 1;
			i.second.clear();
		} else
			for(auto &j : i.second) t.push_back(j);
	}

	int m = (int)t.size();
	int cur = 1;

	for(int i = 0, j = 0; i + k <= m; i = j) {
		while(j < i + k) {
			ans[t[j++]] = cur++;
			if(cur > k) cur = 1;
		}
	}

	for(auto &i : ans)
		cout << i << ' ';
	cout << '\n';
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