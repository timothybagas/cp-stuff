#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;

	vector<string> s(n); for(auto &i : s) cin >> i;

	auto cmp = [](pair<int, int> &a, pair<int, int> &b) {
		return (a.first - a.second) > (b.first - b.second);
	};

	int ans = 0;

	for(char c = 'a'; c <= 'e'; c++) {
		vector<pair<int, int>> cur;

		for(int i = 0; i < n; i++) {
			int cnt = 0, dif = 0;
			for(auto &i : s[i]) {
				if(i == c) ++cnt;
				else ++dif;
			}
			cur.push_back(make_pair(cnt, dif));
		}

		sort(cur.begin(), cur.end(), cmp);

		vector<int> cnt(2, 0);

		for(int i = 0; i < n; i++) {
			cnt[0] += cur[i].first;
			cnt[1] += cur[i].second;

			if(cnt[0] > cnt[1]) ans = max(ans, i + 1);
		}
	}

	cout << ans << '\n';
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