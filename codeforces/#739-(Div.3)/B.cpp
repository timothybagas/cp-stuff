#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	ll a, b, c;
	cin >> a >> b >> c;

	ll dif = max(a, b) - min(a, b);

	if(abs(a - c) == dif || abs(b - c) == dif
		|| a > 2*dif || b > 2*dif || c > 2*dif) {
		cout << "-1\n";
		return;
	}

	c = (c + dif) % (2*dif);

	if(c == 0)
		c = 2*dif;

	cout << (c == a || c == b ? -1 : c) << '\n';
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