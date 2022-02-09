#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;
 
	map<int, ll> mp;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		mp[a - i]++;
	}
 
	ll ans = 0;
	for(auto i : mp) {
		ans += (i.second) * (i.second - 1LL) / 2LL;
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