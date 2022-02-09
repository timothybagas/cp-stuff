#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n, m, k;
	cin >> n >> m >> k;
	
	if(n & 1) {
		k = n * m / 2 - k;
		swap(n, m);
	}
	
	cout << (!(k & 1) && k <= n * (m / 2) ? "YES" : "NO") << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t = 1; cin >> t;
	while(t--) {
		task();
	}
	return 0;
}