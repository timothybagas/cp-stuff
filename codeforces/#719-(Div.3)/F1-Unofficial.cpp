#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n >> t;

	vector<int> a(t); for(auto &i : a) cin >> i;

	for(int i = 0; i < t; i++) {
		int k = a[i];

		int left = 1, right = n;
		while(left <= right) {
			int mid = (right + left) / 2;

			cout << "? " << left << ' ' << mid << endl;
			int sum; cin >> sum;

			if(k <= mid - left + 1 - sum) {
				if(left == right) {
					cout << "! " << left << flush;
					break;
				} else
					right = mid;
			} else {
				k -= mid - left + 1 - sum;
				left = mid + 1;
			}
		}
	}
	return 0;
}