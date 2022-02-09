#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll NMX = 1LL << 60;

void task() {
	string s; cin >> s;
	int n = (int)s.length();
	
	int dif = INT_MAX;

	for(ll cur = 1; cur <= NMX; cur <<= 1) {
		string t = to_string(cur);
		int m = (int)t.length();

		int i = 0, j = 0, cnt = 0;

		while(i < n && j < m) {
			if(s[i] != t[j]) {
				cnt++;
			} else j++;
			i++;
		}

		dif = min(dif, cnt + (m - j) + (n - i));
	}

	cout << dif << '\n';
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