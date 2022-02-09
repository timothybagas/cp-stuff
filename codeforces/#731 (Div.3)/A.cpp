#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	vector<int> a(2); for(auto &i : a) cin >> i;
	vector<int> b(2); for(auto &i : b) cin >> i;
	vector<int> f(2); for(auto &i : f) cin >> i;

	if(a[0] == b[0] && a[0] == f[0]) {
		cout << abs(a[1] - b[1]) + (min(a[1], b[1]) < f[1] && f[1] < max(a[1], b[1]) ? 2 : 0) << '\n';
		return;
	}

	if(a[1] == b[1] && a[1] == f[1]) {
		cout << abs(a[0] - b[0]) + (min(a[0], b[0]) < f[0] && f[0] < max(a[0], b[0]) ? 2 : 0) << '\n';
		return;
	}

	cout << abs(a[0] - b[0]) + abs(a[1] - b[1]) << '\n';
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