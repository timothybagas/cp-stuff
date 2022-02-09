#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int k, n, m;
	cin >> k >> n >> m;

	vector<int> a(n); for(auto &i : a) cin >> i;
	vector<int> b(m); for(auto &i : b) cin >> i;

	vector<int> ans;

	for(int i = 0, x = 0, y = 0; i < n + m; i++) {
		if(x < n && y < m) {
			if(a[x] <= b[y]) {
				if(a[x] == 0) {
					ans.push_back(0);
					++k;
				} else if(a[x] > k) {
					cout << "-1\n";
					return;
				} else
					ans.push_back(a[x]);
				x++;
			} else {
				if(b[y] == 0) {
					ans.push_back(0);
					++k;
				} else if(b[y] > k) {
					cout << "-1\n";
					return;
				} else
					ans.push_back(b[y]);
				y++;
			}
		} else if(x < n) {
			if(a[x] == 0) {
				ans.push_back(0);
				++k;
			} else if(a[x] > k) {
				cout << "-1\n";
				return;
			} else
				ans.push_back(a[x]);
			x++;
		} else {
			if(b[y] == 0) {
				ans.push_back(0);
				++k;
			} else if(b[y] > k) {
				cout << "-1\n";
				return;
			} else
				ans.push_back(b[y]);
			y++;
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