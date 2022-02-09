#include "../../../common.hpp"

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = (int)s.length();
        int ans = 0;
        for(int i = 0; i + 3 <= n; i++) {
            set<int> ss;
            for(int j = i; j < i + 3; j++) ss.insert(s[j]);
            ans += (int(ss.size()) == 3);
        }
        return ans;
    }
};