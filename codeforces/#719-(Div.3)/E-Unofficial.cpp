#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;
	string s; cin >> s;

	int dots = 0;
	for(int i = 0; i < n; i++)
		dots += int(s[i] == '*');

	if(dots <= 1) {
		cout << "0\n";
		return;
	}

	vector<ll> cnt(n, 0);

	ll cur = 0, add = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '*') {
			cnt[i] += cur;
			++add;
		} else cur += add;
	}

	ll ans = LLONG_MAX;
	cur = add = 0;

	for(int i = n - 1; i >= 0; i--) {
		if(s[i] == '*') {
			cnt[i] += cur;
			++add;

			ans = min(ans, cnt[i]);
		} else cur += add;
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