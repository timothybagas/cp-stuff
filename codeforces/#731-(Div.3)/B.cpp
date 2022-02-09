#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void task() {
	string s; cin >> s;
	int n = (int)s.length();

	char cur = 'a' + (n - 1);

	while(!s.empty()) {
		if(s[0] != cur && s.back() != cur) {
			cout << "NO\n";
			return;
		}

		if(s[0] == cur)
			s.erase(0, 1);
		else if(s.back() == cur)
			s.pop_back();

		cur--;
	}

	cout << "YES\n";
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