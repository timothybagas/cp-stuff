#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;
	if(n % 3 == 0) {
		cout << n / 3 << ' ' << n / 3 << '\n';
		return;
	}
	
	int r = n % 3;
	if(r == 2)
		cout << n / 3 << ' ' << n / 3 + 1 << '\n';
	else
		cout << n / 3 + 1 << ' ' << n / 3 << '\n';
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