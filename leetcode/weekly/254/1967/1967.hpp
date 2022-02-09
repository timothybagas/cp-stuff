#include "../../../common.hpp"

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0, n = (int)word.length();
        for(auto &i : patterns) {
            int len = (int)i.length();
            for(int j = 0; j <= n - len; j++) {
                if(word.substr(j, len) == i) {
                    ++ans; break;
                }
            }
        }
        return ans;
    }
};