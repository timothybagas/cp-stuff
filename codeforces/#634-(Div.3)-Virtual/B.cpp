#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n, a, b;
	cin >> n >> a >> b;

	vector<char> s(a, 'a');
	--b;

	for(int i = 1; i < a; i++) {
		if(b) { s[i] = s[i - 1] + 1; --b; }
	}

	for(int i = 0; i < n; i++) cout << s[i % a];
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