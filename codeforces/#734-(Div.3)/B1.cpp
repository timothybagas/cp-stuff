#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	string s; cin >> s;

	vector<int> a(26, 0);

	for(char &c : s) ++a[c - 'a'];

	int ans = 0, one = 0;
	for(int i = 0; i < 26; i++) {
		if(a[i] == 1)
			one++;
		else if(a[i])
			ans++;
	}

	cout << ans + one / 2 << '\n';
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