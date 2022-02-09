#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;

	vector<int> id[201];

	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		id[a].push_back(i);
	}

	int ans = 0;

	for(int a = 1; a <= 200; a++) {
		for(int b = a; b <= 200; b++) {
			if(a == b) {
				ans = max(ans, int(id[a].size()));
			} else {
				if(id[a].empty() || id[b].empty()) continue;

				vector<int> v = {a, b};

				for(int t = 0; t < 2; t++) {
					int m = int(id[v[t]].size());
					
					for(int i = 0; i < m / 2; i++) {
						auto it1 = lower_bound(id[v[!t]].begin(), id[v[!t]].end(), id[v[t]][i]);
						auto it2 = lower_bound(id[v[!t]].begin(), id[v[!t]].end(), id[v[t]][m - 1 - i]);
						
						if(it2 != id[v[!t]].begin()) --it2;

						if(it1 != id[v[!t]].end() && *it1 <= *it2 && *it2 < id[v[t]][m - 1 - i]) {

							it2 = lower_bound(id[v[!t]].begin(), id[v[!t]].end(), *it2);
						
							int d1 = it1 - id[v[!t]].begin();
							int d2 = it2 - id[v[!t]].begin();

							ans = max(ans, (d2 - d1 + 1) + 2 * (i + 1));
						}
					}
				}

			}
		}
	}

	cout << ans << '\n';
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