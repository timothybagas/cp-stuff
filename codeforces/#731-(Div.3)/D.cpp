#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;
	vector<int> a(n); for(auto &i : a) cin >> i;

	vector<int> ans;
	ans.push_back(0);

	for(int i = 0; i + 1 < n; i++) {
		if((a[i] & a[i + 1]) == a[i]) {
			ans.push_back(0);
		} else {
			int len = int(log2(max(a[i + 1], a[i])));
			int cur = 0;

			for(int j = (1 << len); j; j >>= 1) {
				if((a[i] & j) && !(a[i + 1] & j)) cur |= j;
			}

			ans.push_back(cur);
			a[i + 1] |= cur;
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