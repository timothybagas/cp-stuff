#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int k; cin >> k;

	int d = 1;
	while(d*d < k) d++;

	int row = (d*d - k < d ? d : k - (d - 1)*(d - 1));
	int col = (d*d - k < d ? d*d - k + 1 : d);

	cout << row << ' ' << col << '\n';
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