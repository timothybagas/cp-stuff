#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int k; cin >> k;

	int cnt = 0, val = 1;

	for(int i = 1; i < 2000 && cnt != k; i++) {
		int temp = i;
		if(i % 10 == 3 || i % 3 == 0) continue;

		cnt++; val = i;
	}

	cout << val << '\n';
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