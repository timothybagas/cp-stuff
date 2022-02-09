#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	vector<string> s(9); for(auto &i : s) cin >> i;
	
	for(int v = 0; v < 9; v += 3) {
		for(int i = v, j = v / 3; i < v + 3; i++, j += 3) {
			s[i][j] = (s[i][j] == '9' ? '1' : s[i][j] + 1);
		}
	}

	for(auto &i : s)
		cout << i << '\n';
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