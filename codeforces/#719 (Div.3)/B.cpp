#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;

	int ans = 0;
	for(int i = 10; i <= n; i *= 10) ans += 9;

	int temp = n, last = 0, len = 0;
	while(temp) {
		last = temp % 10;
		temp /= 10;
		++len;
	}

	while(len--) {
		temp = temp * 10 + last;
	}

	cout << ans + (last - 1) + int(temp <= n) << '\n';
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