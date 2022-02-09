#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = (ll)1e10;
const int NMX = (int)3e5+5;
ll a[NMX], t[NMX];

void task() {
	int n, k;
	cin >> n >> k;

	fill(t, t + n, INF);

	for(int i = 0; i < k; i++) {
		cin >> a[i]; --a[i];
	}

	for(int i = 0; i < k; i++) {
		ll f; cin >> f;
		t[a[i]] = f;
	}

	ll cur = INF;
	for(int i = 0; i < n; i++) {
		cur = min(t[i], cur);
		t[i] = cur++;
	}

	cur = INF;
	for(int i = n - 1; i >= 0; i--) {
		cur = min(t[i], cur);
		t[i] = cur++;
	}

	for(int i = 0; i < n; i++)
		cout << t[i] << " \n"[i == n - 1];
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