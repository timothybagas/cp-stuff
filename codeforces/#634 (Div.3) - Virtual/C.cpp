#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	int n; cin >> n;

	map<int, int> skills;
	int maxSkill = 0;
	
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		maxSkill = max(maxSkill, ++skills[a]);
	}

	int unq = (int)skills.size();

	cout << (unq == maxSkill ? unq - 1 : min(unq, maxSkill)) << '\n';
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