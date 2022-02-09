#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;
	string s; cin >> s;
 
	vector<int> cnt(26, 0);
	for(int i = 0, j = 0; i < n; i = j) {
		if(cnt[s[i] - 'A']) {
			cout << "NO\n";
			return;
		}
		while(j < n && s[j] == s[i]) j++;
		cnt[s[i] - 'A'] = 1;
	}
 
	cout << "YES\n";
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