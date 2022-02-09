#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;

	if(n == 2) {
		cout << -1 << '\n';
		return;
	}

	int num = 1;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << num << ' ';
			num = (num + 2 <= n * n ? num + 2 : num % 2 + 1);
		}
		cout << '\n';
	}
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